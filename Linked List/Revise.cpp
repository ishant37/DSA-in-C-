#include<iostream>
#include<vector>
using namespace std;
class List{
    public:
    int data;
    List* next;

    List(int data1){
        data=data1;
        next=NULL;
    }
};

List* converttoLL(vector<int> &arr){
    if(arr.empty()) return NULL;
    List* head=new List(arr[0]);
    List* curr=head;
    for(int i=1;i<arr.size();i++){
        curr->next=new List(arr[i]);
        curr=curr->next;
    }
    return head;
}

void printLL(List* head){
    List* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
List* reverse(List* head){
    List* curr=head;
    List* prev=NULL;
    while(curr!=NULL){
        List* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

List* findtail(List* head){
    List* tail=head;
    while(tail!=nullptr){
        tail=tail->next;
    }
    return tail;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    List* head=converttoLL(arr);
    head=findtail(head);
   cout<<"The tail is "<< printLL(head);
    return 0;
}  