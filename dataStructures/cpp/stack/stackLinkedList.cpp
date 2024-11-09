#include <bits/stdc++.h>


// Node structure
class Node {
public:
    int data;         // Data part
    int* next;       // Pointer to the next node

    // Constructor to initialize node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    int* head;
	int* tail;
public:
    // Constructor
    LinkedList() {
        head = nullptr; // Initialize an empty list
		tail = nullptr;
    }

	// insert at beginning
    void insertAtHead(int val) {
		if(!head && !tail) {
			std::cout << "empty list" << std::endl;
			return;
		}

        Node* newNode = new Node(val); // create new node
        newNode->next = head->next;           // point new node to the current head
        head = newNode;                 // Update head to new node
    };


	void insertTail(int val)
		if(!head && !tail) {
			std::cout << "empty list" << std::endl;
			return;
		}
		
		Node* newNode = new Node(val);















