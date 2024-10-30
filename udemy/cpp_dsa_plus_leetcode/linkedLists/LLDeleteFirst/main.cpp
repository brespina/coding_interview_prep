#include <iostream>

class Node {

	int value;
	Node* next;

	Node(int value) {
		this->value = value;
		next = nullptr;
	}
};


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
		void printList() {

		}


};

int main() {


	return 0;
}
