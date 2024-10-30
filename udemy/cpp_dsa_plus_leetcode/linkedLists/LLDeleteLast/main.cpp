#include <iostream>

class Node {
	public:
		int value;
		Node* next;

		Node(int value) {
			this->value = value;
			next = nullptr;
		}

};

class LinkedList {
	private:
		int length;
		Node* head;
		Node* tail;
	public:
		LinkedList(int value) {
			Node* newNode = new Node(value);
			head = newNode;
			tail = newNode;
			length = 1;
		}
		~LinkedList() {
			Node* temp = head;
			while(head != nullptr) {

				head = head->next;
				delete temp;
				temp = head;
			}
		}


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


		Node* getHead() {
			return head;
		}

		Node* getTail() {
			return tail;
		}

		int getLength() {
			return length;
		}

		// we will use this to test append()
		void makeEmpty() {
			Node* temp = head;
			while(!head) {
				head = head->next;
				delete temp;
				temp = head;
			}
			tail = nullptr;
			length = 0;
		}


		// write append func
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
				head = nullptr;
				tail = nullptr;
			} else {
				while(temp->next->next)
					temp = temp->next;

				tail = temp;
				tail->next = nullptr;

			}
			delete temp->next;
			length--;

		}

};


int main() {
	LinkedList* myLinkedList = new LinkedList(1);
	myLinkedList->append(2);
	myLinkedList->append(3);
	myLinkedList->append(4);
	myLinkedList->append(5);


	std::cout << "LL before deleteLast():\n";
	myLinkedList->printList();

	myLinkedList->deleteLast();
	std::cout << "\n\nLL after 1st deleteLast():\n";
	myLinkedList->printList();


	myLinkedList->deleteLast();
	std::cout << "\n\nLL after 2nd deleteLast():\n";
	myLinkedList->printList();

	myLinkedList->deleteLast();
	std::cout << "\n\nLL after 3rd deleteLast():\n";
	myLinkedList->printList();

	/*
	 * EXPECTED OUTPUT
	 * ----------------
	 *  LL before deleteLast():
	 *  1
	 *  2
	 *
	 * LL after 1st deleteLast()
	 * 1
	 *
	 * LL after 2nd deleteLast()
	 *
	 * LL after 3rd deleteLast()
	 *
	 */

	return 0;
}
