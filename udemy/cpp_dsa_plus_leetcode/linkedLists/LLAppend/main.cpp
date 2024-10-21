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
		Node* head;
		Node* tail;
		int length;
	public:
		LinkedList(int value) {
			Node* newNode = new Node(value);
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
};


int main() {
	std::cout << "\n------------- LinkedLit Test: non-empty -------------\n";
	LinkedList* llzero = new LinkedList(1)
	std::cout << "Before append: ";
	llzero.printList();

	llzero.append(2);
	std::cout << "After append: " << std::endl;
	llzero.printList();

	std::cout << "Expected Length: 2, Actual Lengths: " << llzero.getLength() << std::endl;
	std::cout << "Expected Tail Value: 2, Actual Tail Value: " << llzero.getTail() << std::endl;
	std::cout << "Expected Head Value: 2, Actual Head Value: " << llzero.getLength() << std::endl;
	// -------------------------
	LinkedList* llone = new LinkedList(1);
	llone.makeEmpty();
	std::cout << "Before append: ";
	llone.printList();

	llone.append(2);
	std::cout << "After append: " << std::endl;
	llone.printList();

	std::cout << "Expected Length: 1, Actual Lengths: " << llone.getLength() << std::endl;
	std::cout << "Expected Tail Value: 2, Actual Tail Value: " << llone.getTail() << std::endl;
	std::cout << "Expected Head Value: 2, Actual Head Value: " << llone.getLength() << std::endl;

	// ---------------------------------
	LinkedLis* lltwo = new LinkedList(1);
	std::cout << "Before append: ";
	lltwo.printList();

	lltwo.append(2);
	lltwo.append(3);
	std::cout << "After append: " << std::endl;
	lltwo.printList();

	std::cout << "Expected Length: 3, Actual Lengths: " << lltwo.getLength() << std::endl;
	std::cout << "Expected Tail Value: 3, Actual Tail Value: " << lltwo.getTail() << std::endl;
	std::cout << "Expected Head Value: 1, Actual Head Value: " << lltwo.getLength() << std::endl;
	return 0;
}
