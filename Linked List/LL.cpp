#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* ConvertArrLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int LenthofLL(Node* head){
    int count=0;
    Node* temp=head;
    while (temp)
    {
        temp=temp->next;
        count++;
    }
    return count;
    
}

int SEarch(Node* head, int val){
    Node* temp=head;

    while(temp){
         
        if(temp->data==val) return 1;
        temp=temp->next;
       
    }
    return 0;
}
Node* reversebetween(Node* head,int left,int right){
    if(head==NULL || left>=right) return head;
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    int count=1;

    while(curr!=NULL && count<left){
        prev=curr;
        curr=curr->next;
        count++;
    }
    
    Node* con=prev;
    Node* tail=curr;

    while(curr!=NULL && count<=right){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(con!=NULL) con->next=prev; else head=prev;

    tail->next=curr;

    return head;

}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    };
    cout<<endl;
}
Node* removefromhead(Node* head){
    if(head==NULL) return NULL;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node*  removefromtail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main(){
    vector<int> arr = {12, 3, 4, 6, 7, 8, 9, 10};
    Node* head = ConvertArrLL(arr);
    print(head);
    head=reversebetween(head, 2, 7);
    print(head);
    return 0;
}