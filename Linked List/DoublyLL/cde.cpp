#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data=data1;
        next=nullptr;  // Initialize next to nullptr
        prev=nullptr;  // Initialize prev to nullptr
    }
};


Node* convertLLtoDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prevNode = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* curr = new Node(arr[i]);
        prevNode->next = curr;
        curr->prev = prevNode;
        prevNode = curr;
    }

    return head;
};
    
void prtinDLL(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* dedltetail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newtail=tail->prev;
    newtail->next=nullptr;
    tail->prev=nullptr;

    delete tail;
    return head;
}
Node* deleteFromHead(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }
    Node* newhead=head->next;
    newhead->prev=nullptr;

    delete head;
    return newhead;
}

Node* removeKelemt(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    int count=0;
    Node* kNode=head;
    while(kNode!=NULL){
        if(count==k) break;
        kNode=kNode->next;
        count++;
    }

    Node* back=kNode->prev;
    Node* front=kNode->next;

    if(back==NULL || front==NULL){
        return NULL;

    }
    else if(back==NULL){
       return deleteFromHead(head);
    }
    else if(front==NULL){
       return dedltetail(head);
    }

    back->next=front;
    front->prev=back;

    kNode->next=nullptr;
    kNode->prev=nullptr;
    
    delete kNode;
    return head;
}
Node* reverse(Node* head){
    Node* curr = head;
    Node* temp = nullptr;

    while (curr != nullptr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    return temp->prev;
}

void printDLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; // Example vector
    Node* head = convertLLtoDLL(arr);
    head = reverse(head);
    printDLL(head);
    return 0;
}