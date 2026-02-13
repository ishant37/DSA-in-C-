#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main(){
    ListNode *head = new ListNode(1);
    ListNode *current = head;
    for (int i = 2; i <= 10; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }
    current->next = nullptr; // Terminate the list
    cout << "Original list: ";
    current = head;
    while (current) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
    current = head;
    while (current) {
        current->val *= 2; // Double the value of each node
        current = current->next;
    }
    cout << "Doubled list: ";
    current = head;
    while (current) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
    return 0;
}