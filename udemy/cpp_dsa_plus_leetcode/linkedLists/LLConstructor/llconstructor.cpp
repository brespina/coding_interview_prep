#include <iostream>

class Node {
	public:
	int data;
	Node* next;

	Node(int data) {

		this->data = data;
		next = nullptr;
	}
};

class LinkedList {
	private:
		Node* head;
		Node* tail;
		int length;

	public:
		LinkedList(int data) {
			Node* newNode = new Node(data);
			head = newNode;
			tail = newNode;
			length = 1;
		}

		~LinkedList() {
			Node* temp = head;
			while(head) {
				head = head->next;
				delete temp;
				temp = head;
			}

		}

		void printList() {
			if(!head) {
				std::cout << "empty list" << std::endl;
				return;
			}

			Node* temp = head;
			std::cout << "linked list: " << std::endl;
			while(temp != nullptr) {
				std::cout << temp->data << std::endl;
				temp = temp->next;
			}
		}

		void getHead() {
			if(!head) {
				std::cout << "head: nullptr" << std::endl;
			}
			else {
				std::cout << "head: " << head->data << std::endl;
			}
		}

		void getTail() {
			if(!tail) {
				std::cout << "tail: nullptr" << std::endl;
			}
			else {
				std::cout << "tail: " << tail->data << std::endl;
			}
		}


		void getLength() {
			std::cout << "length: " << length << std::endl;
		}

};	

int main() {

	LinkedList* myLinkedList = new LinkedList(4);

	myLinkedList->getHead();
	myLinkedList->getTail();
	myLinkedList->getLength();


	myLinkedList->printList();



/*
 *  EXPECTED OUTPUT:
 *  ----------------
 *  Head: 4
 *  Tail: 4
 *  Length: 1
 *
 *  LinkedList:
 *  4
 */
	return 0;
}
