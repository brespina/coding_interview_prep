// LLAppendFirst

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

		Node* getHead() { return head; }
		Node* getTail() { return tail; }
		int getLength() { return length; }

		// we will use this to test append()
		void makeEmpty() {
			if (length == 0 || head == nullptr ) {
				std::cout << "empty list" << std::endl;
			}
			else {
				Node* temp = head;
				while(!head) {
					head = head->next;
					delete temp;
					temp = head;
				}
				tail = nullptr;
				length = 0;
			}
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

		void appendFirst(int value) {
			Node* newNode = new Node(value);
			if(head == nullptr) {
				head = newNode;
				tail = newNode;
			}
			else {
				newNode->next = head;
				head = newNode;
			}
			length++;
		}


};


int main () {

	LinkedList* myLinkedList = new LinkedList(1);
	myLinkedList->append(2);
	myLinkedList->append(3);
	myLinkedList->append(4);
	myLinkedList->append(5);
	myLinkedList->appendFirst(0);
	myLinkedList->printList();
	
	return 0;
}
