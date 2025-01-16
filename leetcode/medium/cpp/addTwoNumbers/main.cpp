// addTwoNumbers/main.cpp
#include <iostream>
#include <vector>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(0), next(next) {}
};

class Solution {
	public:
		ListNode* addTwoNumbers(ListNode *list1, ListNode *list2) {
			ListNode *temp = new ListNode();
			ListNode *result = temp;
			int sumDigit = 0;
			bool carry = 0;

			while(list1 || list2 || carry) {
				sumDigit = carry;
				if(list1) {
					sumDigit += list1->val;
					list1 = list1->next;
				}

				if(list2) {
					sumDigit += list2->val;
					list2 = list2->next;
				}

				if(sumDigit / 10)  { carry = true; }
				else { carry = false; }
				int digit = sumDigit % 10;
				temp->next = new ListNode(digit);
				temp = temp->next;
			}
			return result->next;
		}
};

	
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
	ListNode *list1 = createList({2, 4, 3});
	ListNode *list2 = createList({5, 6, 4});

	std::cout << "Test case 1" << std::endl;
	std::cout << "(1) list1" << std::endl;
	printList(list1);
	std::cout << "(1) list2" << std::endl;
	printList(list2);

	ListNode *llSum = solution.addTwoNumbers(list1, list2);
	std::cout << "(1) linked list sum" << std::endl;
	printList(llSum);
	return 0;
}
