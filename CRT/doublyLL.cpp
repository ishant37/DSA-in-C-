#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data) {
        val = data;
        next = prev = nullptr;
    }
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // ================= INSERT OPERATIONS =================

    // Insert at beginning
    void insertAtHead(int data) {
        Node* temp = new Node(data);

        temp->next = head;

        if (head != nullptr) {
            head->prev = temp;
        }

        head = temp;
    }

    // Insert at end
    void insertAtTail(int data) {
        Node* temp = new Node(data);

        if (head == nullptr) {
            head = temp;
            return;
        }

        Node* curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr->next = temp;
        temp->prev = curr;
    }

    // Insert after a node
    void insertAfterValue(int key, int data) {
        Node* loc = findNode(key);

        if (loc == nullptr) {
            cout << "Node not found\n";
            return;
        }

        Node* temp = new Node(data);

        temp->next = loc->next;
        temp->prev = loc;

        if (loc->next != nullptr) {
            loc->next->prev = temp;
        }

        loc->next = temp;
    }

    // Insert before a node
    void insertBeforeValue(int key, int data) {
        Node* loc = findNode(key);

        if (loc == nullptr) {
            cout << "Node not found\n";
            return;
        }

        // If inserting before head
        if (loc == head) {
            insertAtHead(data);
            return;
        }

        Node* temp = new Node(data);

        temp->next = loc;
        temp->prev = loc->prev;

        loc->prev->next = temp;
        loc->prev = temp;
    }

    // ================= DELETE OPERATIONS =================

    // Delete first node
    void deleteHead() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }

        cout << temp->val << " deleted\n";

        delete temp;
    }

    // Delete last node
    void deleteTail() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (head->next == nullptr) {
            cout << head->val << " deleted\n";
            delete head;
            head = nullptr;
            return;
        }

        Node* curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr->prev->next = nullptr;

        cout << curr->val << " deleted\n";

        delete curr;
    }

    // Delete by value
    void deleteByValue(int key) {
        Node* temp = findNode(key);

        if (temp == nullptr) {
            cout << "Node not found\n";
            return;
        }

        // If head node
        if (temp == head) {
            deleteHead();
            return;
        }

        // If tail node
        if (temp->next == nullptr) {
            temp->prev->next = nullptr;
            cout << temp->val << " deleted\n";
            delete temp;
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        cout << temp->val << " deleted\n";

        delete temp;
    }

    // ================= SEARCH =================

    Node* findNode(int data) {
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->val == data) {
                return temp;
            }

            temp = temp->next;
        }

        return nullptr;
    }

    // ================= DISPLAY =================

    // Print forward
    void printForward() {
        Node* temp = head;

        cout << "Forward: ";

        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Print backward
    void printBackward() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        cout << "Backward: ";

        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->prev;
        }

        cout << endl;
    }

    // ================= LENGTH =================

    int length() {
        int cnt = 0;

        Node* temp = head;

        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }

    // ================= REVERSE =================

    void reverse() {
        Node* curr = head;
        Node* temp = nullptr;

        while (curr != nullptr) {
            temp = curr->prev;

            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }
};

// ================= MAIN FUNCTION =================

int main() {

    DoublyLinkedList dll;

    // Insert operations
    dll.insertAtHead(30);
    dll.insertAtHead(20);
    dll.insertAtHead(10);

    dll.insertAtTail(40);
    dll.insertAtTail(50);

    dll.printForward();
    dll.printBackward();

    // Insert after
    dll.insertAfterValue(20, 25);

    // Insert before
    dll.insertBeforeValue(40, 35);

    dll.printForward();

    // Delete operations
    dll.deleteHead();
    dll.deleteTail();
    dll.deleteByValue(25);

    dll.printForward();

    // Search
    Node* ans = dll.findNode(35);

    if (ans != nullptr) {
        cout << "Found: " << ans->val << endl;
    }
    else {
        cout << "Not Found\n";
    }

    // Length
    cout << "Length: " << dll.length() << endl;

    // Reverse
    dll.reverse();

    dll.printForward();

    return 0;
}