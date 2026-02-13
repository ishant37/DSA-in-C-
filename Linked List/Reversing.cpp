#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert vector to singly linked list
Node* convertLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Reverse singly linked list
Node* reverseLL(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// Add one to the number represented by the linked list
int addOneUtil(Node* head) {
    if (head == nullptr) return 1;
    int carry = addOneUtil(head->next);
    int sum = head->data + carry;
    head->data = sum % 10;
    return sum / 10;
}

Node* addOne(Node* head) {
    int carry = addOneUtil(head);
    if (carry) {
        Node* newNode = new Node(carry);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {9}; // Example vector
    Node* head = convertLL(arr); // Convert vector to singly linked list
    head = addOne(head);         // Add one to the number
    printLL(head);               // Print the result
    return 0;
}