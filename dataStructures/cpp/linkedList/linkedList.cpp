#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;         // Data part
    Node* next;       // Pointer to the next node

    // Constructor to initialize node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;       // Pointer to the head (start) of the list

public:
    // Constructor
    LinkedList() {
        head = nullptr; // Initialize an empty list
    }

	// insert at beginning
    void insertAtHead(int data) {
        Node* newNode = new Node(data); // create new node
        newNode->next = head;           // point new node to the current head
        head = newNode;                 // Update head to new node
    }

    // Insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node(data); // Create a new node

        if (head == nullptr) {          // If the list is empty
            head = newNode;             // The new node becomes the head
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) { // Traverse to the end of the list
            temp = temp->next;
        }
        temp->next = newNode;           // Insert new node at the end
    }

    // Delete a node by value
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head node
        if (temp != nullptr && temp->data == key) {
            head = temp->next;          // Change head to the next node
            delete temp;                // Free memory
            return;
        }

        // Search for the node to be deleted
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If the key was not found in the list
        if (temp == nullptr) return;

        prev->next = temp->next;        // Unlink the node
        delete temp;                    // Free memory
    }

    // Print the entire list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;             // Free the memory of each node
            current = next;
        }
        head = nullptr;                 // Reset head to nullptr
    }
};

// Driver code to test the LinkedList class
int main() {
    LinkedList list;                    // Create a LinkedList object

    list.insertAtHead(10);              // Insert 10 at the head
    list.insertAtEnd(20);               // Insert 20 at the end
    list.insertAtHead(5);               // Insert 5 at the head
    list.insertAtEnd(30);               // Insert 30 at the end

    cout << "Initial List: ";
    list.printList();                   // Print the list

    list.deleteNode(20);                // Delete the node with value 20
    cout << "After Deleting 20: ";
    list.printList();                   // Print the list after deletion

    return 0;
}

