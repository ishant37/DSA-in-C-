#include<iostream>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;  // Not val — must be NULL or nullptr
    }
};

void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
}

int LenthofLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        count++;
    }
    return count;
}
int OddEven(Node* head) {
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = odd->next->next; // Link odd nodes
        even->next = even->next->next; // Link even nodes
        odd = odd->next; // Move to next odd node
        even = even->next; // Move to next even node
    }
    
    odd->next = evenHead; // Link the end of odd list to the head of even list
    return LenthofLL(head); // Return the length of the modified list
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

   print(head);  // Print the linked list

   int newLength = OddEven(head); // Get the length after rearranging
   cout << "Length after rearranging: " << newLength << endl;

   print(head);  // Print the linked list
}