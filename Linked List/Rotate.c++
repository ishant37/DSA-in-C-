// C++ program to rotate a linked list by
// changing moving first node to end k times

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Function to rotate the linked list
// left by k nodes
Node *rotate(Node *head, int k) {
    if (k == 0 || head == nullptr)
        return head;

    Node *current = head;
    int count = 1;
    while(current->next != nullptr && count < k) {
        current = current->next;
        count++;
    }

    // If k is greater than the number of nodes
    if (current->next == nullptr) {
        return head;
    }
    Node *kthNode = current;
    Node *newHead = kthNode->next;
    kthNode->next = nullptr;
    Node *temp = newHead;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;
    return newHead;

}

void printList(Node *node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
  
    head = rotate(head, 2);
    printList(head);

    return 0;
}