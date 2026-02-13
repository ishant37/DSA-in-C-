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

class Queue {
    Node* head;
    Node* tail;
public:
    Queue() {
        head = tail = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) {  // agar last element delete ho gaya
            tail = NULL;
        }
    }

    int front() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    while (!q1.empty()) {
        cout << q1.front() << " -> ";
        q1.pop();
    }
    cout << "NULL\n";
    return 0;
}
