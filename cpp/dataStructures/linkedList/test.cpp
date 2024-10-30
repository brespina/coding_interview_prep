#include <iostream>
#include "LLAppend.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+


static void test() {
    
    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: Append To Non-Empty List
    {
        cout << "\n------ LinkedList Test: Append To Non-Empty List ------\n";
        
        LinkedList ll(1);
        cout << "Before append: ";
        ll.printList();
        
        ll.append(2);
        
        cout << "After append: ";
        ll.printList();
        
        cout << "Expected Length: 2, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << endl;
    }
    
    // Test 2: Append To Empty List
    {
        cout << "\n-------- LinkedList Test: Append To Empty List --------\n";
        
        LinkedList ll(1);
        ll.makeEmpty();  // Make list empty
        cout << "Before append: ";
        ll.printList();
        
        ll.append(2);
        
        cout << "After append: ";
        ll.printList();
        
        cout << "Expected Length: 1, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 2, Actual Head Value: " << ll.getHead()->value << endl;
    }
    
    // Test 3: Multiple Appends
    {
        cout << "\n-------- LinkedList Test: Multiple Appends --------\n";
        
        LinkedList ll(1);
        cout << "Before append: ";
        ll.printList();
        
        ll.append(2);
        ll.append(3);
        
        cout << "After append: ";
        ll.printList();
        
        cout << "Expected Length: 3, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 3, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << endl;
    }
    
}

