#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=nullptr;
    }
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void addfirst(int data){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    void print(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void addafter(Node *loc,int data){
        Node* temp=new Node(data);
        temp->next=loc->next;
        loc->next=temp;
    }
    Node* findNode(int data){
        Node* temp=head;
        while(temp!=NULL){
            if(temp->val==data){
                return temp;
            }
            temp=temp->next;
        }
        return nullptr;
    }
    void delFirst(){
        if(head==nullptr){
            cout<<"Empty list\n";
        }
        Node* ptr=head;
        head=head->next;
        cout<<ptr->val<<" deleted \n";
        delete ptr;
    }
};
int main(){
    LinkedList ll;
    ll.addfirst(30);
    ll.addfirst(20);
    ll.addfirst(10);
    Node* loc=ll.findNode(20);
    ll.addafter(loc,50);
    ll.delFirst();
    ll.print();
}