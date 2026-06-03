#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
};

class CircularLinkedList {
    Node* tail;

public:
    CircularLinkedList() {
        tail = nullptr;
    }

    // ================= INSERT OPERATIONS =================

    // Insert at beginning
    void insertAtHead(int data) {
        Node* temp = new Node(data);

        // Empty list
        if (tail == nullptr) {
            tail = temp;
            tail->next = tail;
            return;
        }

        temp->next = tail->next;
        tail->next = temp;
    }

    // Insert at end
    void insertAtTail(int data) {
        Node* temp = new Node(data);

        // Empty list
        if (tail == nullptr) {
            tail = temp;
            tail->next = tail;
            return;
        }

        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }

    // Insert after a value
    void insertAfterValue(int key, int data) {

        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* curr = tail->next;

        do {
            if (curr->val == key) {

                Node* temp = new Node(data);

                temp->next = curr->next;
                curr->next = temp;

                // If inserted after tail
                if (curr == tail) {
                    tail = temp;
                }

                return;
            }

            curr = curr->next;

        } while (curr != tail->next);

        cout << "Value not found\n";
    }

    // ================= DELETE OPERATIONS =================

    // Delete head
    void deleteHead() {

        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* head = tail->next;

        // Only one node
        if (head == tail) {
            cout << head->val << " deleted\n";
            delete head;
            tail = nullptr;
            return;
        }

        tail->next = head->next;

        cout << head->val << " deleted\n";

        delete head;
    }

    // Delete tail
    void deleteTail() {

        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* head = tail->next;

        // Only one node
        if (head == tail) {
            cout << tail->val << " deleted\n";
            delete tail;
            tail = nullptr;
            return;
        }

        Node* curr = head;

        while (curr->next != tail) {
            curr = curr->next;
        }

        curr->next = tail->next;

        cout << tail->val << " deleted\n";

        delete tail;
        tail = curr;
    }

    // Delete by value
    void deleteByValue(int key) {

        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* curr = tail->next;
        Node* prev = tail;

        do {

            if (curr->val == key) {

                // Only one node
                if (curr == tail && curr == tail->next) {
                    delete curr;
                    tail = nullptr;
                    return;
                }

                prev->next = curr->next;

                // If deleting tail
                if (curr == tail) {
                    tail = prev;
                }

                cout << curr->val << " deleted\n";

                delete curr;
                return;
            }

            prev = curr;
            curr = curr->next;

        } while (curr != tail->next);

        cout << "Value not found\n";
    }

    // ================= SEARCH =================

    bool search(int key) {

        if (tail == nullptr) {
            return false;
        }

        Node* curr = tail->next;

        do {

            if (curr->val == key) {
                return true;
            }

            curr = curr->next;

        } while (curr != tail->next);

        return false;
    }

    // ================= DISPLAY =================

    void print() {

        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = tail->next;

        do {
            cout << temp->val << " ";
            temp = temp->next;

        } while (temp != tail->next);

        cout << endl;
    }

    // ================= LENGTH =================

    int length() {

        if (tail == nullptr) {
            return 0;
        }

        int cnt = 0;

        Node* temp = tail->next;

        do {
            cnt++;
            temp = temp->next;

        } while (temp != tail->next);

        return cnt;
    }
};

// ================= MAIN FUNCTION =================

int main() {

    CircularLinkedList cll;

    cll.insertAtHead(20);
    cll.insertAtHead(10);

    cll.insertAtTail(30);
    cll.insertAtTail(40);

    cll.print();

    cll.insertAfterValue(20, 25);

    cll.print();

    cll.deleteHead();

    cll.print();

    cll.deleteTail();

    cll.print();

    cll.deleteByValue(25);

    cll.print();

    if (cll.search(30)) {
        cout << "30 Found\n";
    }
    else {
        cout << "30 Not Found\n";
    }

    cout << "Length: " << cll.length() << endl;

    return 0;
}