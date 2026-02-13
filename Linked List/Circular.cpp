#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void InsertAtHead(int val) {
        Node* newnode = new Node(val);

        if (tail == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    void InsertAtTail(int val) {
        Node* newnode = new Node(val);

        if (tail == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printCLL() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout << temp->data << endl;
    }
};

int main() {
    CircularList cll;

    cll.InsertAtTail(1);
    cll.InsertAtTail(2);
    cll.InsertAtTail(3);
    

    cll.printCLL();
    return 0;
}
