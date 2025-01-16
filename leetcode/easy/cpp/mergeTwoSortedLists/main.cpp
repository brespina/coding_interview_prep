// mergeTwoSortedLists/main.cpp

#include <iostream>
#include <vector>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}

};  // end struct
	
class Solution {
	public:
		ListNode* mergeTwoLists(ListNode *list1, ListNode *list2) {
			ListNode *temp = new ListNode();
			ListNode *curr = temp;

			while(list1 && list2) {
				if(list1->val < list2->val) {
					curr->next = list1;
					list1 = list1->next;
				}
				else {
					curr->next = list2;
					list2 = list2->next;
				}
				curr = curr->next;
			}
			if(list1) curr->next = list1;
			else curr->next = list2;
			return temp->next;
			/*std::cout << temp->val << std::endl;*/
		}

};  // end class
	
ListNode* createList(const std::vector<int> &vals) {
	ListNode* head = nullptr;
	ListNode* tail = nullptr;
	for(int val : vals) {
		ListNode* newNode = new ListNode(val);
		if(!head) {
			// if empty, start
			head = newNode;
			tail = newNode;
		}
		else {
			// if list is populated. append item to end
			tail->next = newNode;
			tail = tail->next;
		}
	}
	return head;
}

void printList(ListNode *head) {
	while(head) {
		std::cout << head->val << " ";
		head = head->next;
	}
	std::cout << std::endl;
}


void deallocate(ListNode *head) {
	while(head) {
		ListNode *temp = head;
		head = head->next;
		delete temp;
	}
}

int main() {
	Solution solution;
	// test 1
	ListNode *list1 = createList({1, 2, 4});
	ListNode *list2 = createList({1, 3, 4});

	std::cout << "Test case 1:" << std::endl;

	std::cout << "(1) list1: ";
	printList(list1);

	std::cout << "(1) list2: ";
	printList(list2);

	ListNode *mergedList = solution.mergeTwoLists(list1, list2);

	std::cout << "(1) Merged list: ";
	printList(mergedList);

	deallocate(mergedList);
	
	// test 2
	list1 = createList({});
	list2 = createList({});

	std::cout << "Test case 2:" << std::endl;

	std::cout << "(2) list1: ";
	printList(list1);

	std::cout << "(2) list2: ";
	printList(list2);

	mergedList = solution.mergeTwoLists(list1, list2);

	std::cout << "(2) Merged list: ";
	printList(mergedList);

	deallocate(mergedList);

	// test 3
	list1 = createList({});
	list2 = createList({0});

	std::cout << "Test case 3:" << std::endl;

	std::cout << "(3) list1: ";
	printList(list1);

	std::cout << "(3) list2: ";
	printList(list2);

	mergedList = solution.mergeTwoLists(list1, list2);

	std::cout << "(3) Merged list: ";
	printList(mergedList);

	deallocate(mergedList);
	return 0;
}
