// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int data){
//         val=data;
//         next=nullptr;
//     }
// };
// class LinkedList{
//     Node* head;
//     public:
//     LinkedList(){
//         head=nullptr;
//     }
//     void addfirst(int data){
//         Node* temp=new Node(data);
//         temp->next=head;
//         head=temp;
//     }
//     void print(){
//         Node* temp=head;
//         while(temp!=nullptr){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//     }
//     void addafter(Node *loc,int data){
//         Node* temp=new Node(data);
//         temp->next=loc->next;
//         loc->next=temp;
//     }
//     Node* findNode(int data){
//         Node* temp=head;
//         while(temp!=NULL){
//             if(temp->val==data){
//                 return temp;
//             }
//             temp=temp->next;
//         }
//         return nullptr;
//     }
//     void delFirst(){
//         if(head==nullptr){
//             cout<<"Empty list\n";
//         }
//         Node* ptr=head;
//         head=head->next;
//         cout<<ptr->val<<" deleted \n";
//         delete ptr;
//     }
// };
// int main(){
//     LinkedList ll;
//     ll.addfirst(30);
//     ll.addfirst(20);
//     ll.addfirst(10);
//     Node* loc=ll.findNode(20);
//     ll.addafter(loc,50);
//     ll.delFirst();
//     ll.print();
// }

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

class SinglyLinkedList {
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    // ================= INSERT OPERATIONS =================

    // Insert at beginning
    void insertAtHead(int data) {
        Node* temp = new Node(data);

        temp->next = head;
        head = temp;
    }

    // Insert at end
    void insertAtTail(int data) {

        Node* temp = new Node(data);

        // Empty list
        if (head == nullptr) {
            head = temp;
            return;
        }

        Node* curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr->next = temp;
    }

    // Insert after a value
    void insertAfterValue(int key, int data) {

        Node* curr = head;

        while (curr != nullptr && curr->val != key) {
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "Value not found\n";
            return;
        }

        Node* temp = new Node(data);

        temp->next = curr->next;
        curr->next = temp;
    }

    // Insert before a value
    void insertBeforeValue(int key, int data) {

        // Empty list
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Insert before head
        if (head->val == key) {
            insertAtHead(data);
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr && curr->val != key) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "Value not found\n";
            return;
        }

        Node* temp = new Node(data);

        prev->next = temp;
        temp->next = curr;
    }

    // ================= DELETE OPERATIONS =================

    // Delete head
    void deleteHead() {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;

        cout << temp->val << " deleted\n";

        delete temp;
    }

    // Delete tail
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

        Node* prev = nullptr;
        Node* curr = head;

        while (curr->next != nullptr) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = nullptr;

        cout << curr->val << " deleted\n";

        delete curr;
    }

    // Delete by value
    void deleteByValue(int key) {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Delete head
        if (head->val == key) {
            deleteHead();
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr && curr->val != key) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "Value not found\n";
            return;
        }

        prev->next = curr->next;

        cout << curr->val << " deleted\n";

        delete curr;
    }

    // ================= SEARCH =================

    bool search(int key) {

        Node* temp = head;

        while (temp != nullptr) {

            if (temp->val == key) {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    // ================= DISPLAY =================

    void print() {

        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
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

        Node* prev = nullptr;
        Node* curr = head;
        Node* nextNode = nullptr;

        while (curr != nullptr) {

            nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        head = prev;
    }

    // ================= MIDDLE ELEMENT =================

    void middleElement() {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle Element: " << slow->val << endl;
    }
};

// ================= MAIN FUNCTION =================

int main() {

    SinglyLinkedList sll;

    sll.insertAtHead(30);
    sll.insertAtHead(20);
    sll.insertAtHead(10);

    sll.insertAtTail(40);
    sll.insertAtTail(50);

    sll.print();

    sll.insertAfterValue(20, 25);

    sll.print();

    sll.insertBeforeValue(40, 35);

    sll.print();

    sll.deleteHead();

    sll.print();

    sll.deleteTail();

    sll.print();

    sll.deleteByValue(25);

    sll.print();

    if (sll.search(35)) {
        cout << "35 Found\n";
    }
    else {
        cout << "35 Not Found\n";
    }

    cout << "Length: " << sll.length() << endl;

    sll.middleElement();

    sll.reverse();

    cout << "Reversed List: ";
    sll.print();

    return 0;
}