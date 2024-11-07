// LLDeleteFirst/main.cpp
#include <iostream>

class Node {
	public:
		int value;
		Node* next;

		Node(int value) {
			this->value = value;
			next = nullptr;
		}
	}; // end Node class


class LinkedList {

	private:
		Node* head;
		Node* tail;
		int length;
	public:
		// constructor
		LinkedList(int value) {
			Node* newNode = new Node(value);
			head = newNode;
			tail = newNode;
			length = 1;

		}
		// destructor
		~LinkedList() {
			Node* temp = head;
			while(head != nullptr) {
				head = head->next;	
				delete temp;
				temp = head;
			}

		}

		// member functions
		// 
		Node* getHead() { return head; }
		Node* getTail() { return tail; }
		int getLength() { return length; }

		void printList() {
			Node* temp = head;
			if (temp == nullptr) {
				std::cout << "empty" << std::endl;
			} else {
				while(temp != nullptr) {

					std::cout << temp->value;
					temp = temp->next;

					if(temp!=nullptr) {
						std::cout << " -> ";
					}
				}
			}
			std::cout << std::endl;
		}
		
		// test for append
		void makeEmpty() {
			if(length == 0 || head == nullptr) { 
				std::cout << "empty list" << std::endl;
			}
			else {
				// set a temp pointer to head
				Node* temp = head;
				while(head != nullptr) {
					head = head->next;
					delete temp;
					temp = head;
				}
				tail = nullptr;
				length = 0;
			}
		}

		void append(int value) {
			Node* newNode = new Node(value);
			if(head == nullptr) {
				head = newNode;
				tail = newNode;
			}
			else {
				tail->next = newNode;
				tail = newNode;
			}
			length++;
		}

		void deleteLast() {
			if(length == 0) return;

			Node* temp = head;
			if(length == 1) {
				delete head;
				head = nullptr;
				tail = nullptr;
			} 
			else {
				while(temp->next->next != nullptr) {
					temp = temp->next;
				}
				tail = temp;
				tail->next = nullptr;
			}
			delete temp->next;
			length--;
		}

		void deleteFirst() {
			if(length == 0) return;

			Node* temp = head;
			if(length == 1) {
				delete head;
				head = nullptr;
				tail = nullptr;
			} 
			else { head = head->next; }
			delete temp;
			length--;
		}

}; // end LinkedList class

int main () {

	LinkedList* myLinkedList = new LinkedList(1);
	myLinkedList->append(2);
	myLinkedList->append(3);
	myLinkedList->append(4);
	myLinkedList->append(5);
	myLinkedList->deleteFirst();
	myLinkedList->deleteLast();
	myLinkedList->printList();

	myLinkedList->makeEmpty();
	myLinkedList->printList();
	
	return 0;
}
