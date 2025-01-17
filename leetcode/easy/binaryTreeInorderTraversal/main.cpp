/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 /*
 morris method and threaded binary trees, no recursion or stack just intelligent reordering algorithm of pointers to match inorder

 default behavior is if no left child, move right.

 if current has a left child. in the currents left subtree, the rightmost node will become the parent of current. reassign current to the original left child.
ex:

          1
        /   \
       2     3
      / \   /
     4   5 6

the curr left subtree is
         2
        / \
       4   5

5 is right most, current is now 5 right child, 2 becomes current
         2
        / \
       4   5
            \
             1
              \
               3
              /
             6
repeat 
        4
         \
          2
         / \
       (4)  5
             \
              1
            /   \
          (2)    3
                /
               6

 */
struct TreeNode {
	int val;
 	TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // threaded binary tree and morris method 
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        TreeNode* current = root;
        TreeNode* previous = root;
        
        while(current != nullptr) { //
            if(current->left == nullptr) {  // if no left child. print. move right
                res.push_back(current->val);
                current = current->right;
            }
            else {  // current has left subtree. current will be the right most node of subtree's right child. 
                previous = current->left;  // previous assigned to head of the aforementioned subtree
                // next need to find right most of subtree
                while(previous->right != nullptr && previous->right != current) {  //confused why second condition
                    previous = previous->right;
                }
                if(previous->right == nullptr) {
                    //current becomes connected to rightmost subtree node as right child
                    previous->right = current;
                    current = current->left;
                }
                //not sure how this is would ever be anything other than nullptr. need more investigation.
                // apparently its to restore the tree structure.
                else {
                    previous->right = nullptr;
                    res.push_back(current->val);
                    current = current->right;
                }
            }
        }
        return res;
    }
};
