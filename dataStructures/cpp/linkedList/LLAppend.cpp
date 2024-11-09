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
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr)
                std::cout << "empty";
            else {
                while (temp != nullptr) {
                    std::cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
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
        
        // We will use this method to test append to an empty list
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            tail = nullptr;
            length = 0;
        }

        //   +====================================================+
        //   |                 WRITE YOUR CODE HERE               |
        //   | Description:                                       |
        //   | - Write code to append 'value' to the list         |
        //   | - Return type: void                                |
        //   |                                                    |
        //   | Tips:                                              |
        //   | - Consider edge cases like empty lists             |
        //   | - Remember to update the length                    |
        //   | - Check output from Test.cpp in "User logs"        |
        //   +====================================================+
        void append(int value) {
            Node* newNode = new Node(value);
            length++;
            if(head == nullptr && tail == nullptr) {
                tail = newNode;
                head = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        
}; 

int main() {
   // Test 1: Append To Non-Empty List
        std::cout << "\n------ LinkedList Test: Append To Non-Empty List ------\n";
        
        LinkedList ll(1);
        std::cout << "Before append: ";
        ll.printList();
        
        ll.append(2);
        
        std::cout << "After append: ";
        ll.printList();
        
        std::cout << "Expected Length: 2, Actual Length: " << ll.getLength() << std::endl;
        std::cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << std::endl;
        std::cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << std::endl;
    
    // Test 2: Append To Empty List
        std::cout << "\n-------- LinkedList Test: Append To Empty List --------\n";
        
        LinkedList llone(1);
        llone.makeEmpty();  // Make list empty
        std::cout << "Before append: ";
        llone.printList();
        
        llone.append(2);
        
        std::cout << "After append: ";
        llone.printList();
        
        std::cout << "Expected Length: 1, Actual Length: " << llone.getLength() << std::endl;
        std::cout << "Expected Tail Value: 2, Actual Tail Value: " << llone.getTail()->value << std::endl;
        std::cout << "Expected Head Value: 2, Actual Head Value: " << llone.getHead()->value << std::endl;
    
    // Test 3: Multiple Appends
        std::cout << "\n-------- LinkedList Test: Multiple Appends --------\n";
        
        LinkedList ll2(1);
        std::cout << "Before append: ";
        ll2.printList();
        
        ll2.append(2);
        ll2.append(3);
        
        std::cout << "After append: ";
        ll2.printList();
        
        std::cout << "Expected Length: 3, Actual Length: " << ll2.getLength() << std::endl;
        std::cout << "Expected Tail Value: 3, Actual Tail Value: " << ll2.getTail()->value << std::endl;
        std::cout << "Expected Head Value: 1, Actual Head Value: " << ll2.getHead()->value << std::endl;
    
    return 0;
}


