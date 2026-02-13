#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
vector<int> LCA(Node* root, int n1, int n2){
    if(root==NULL){
        return {};
    }
    if(root->data==n1 || root->data==n2){
        return {root->data};
    }
    vector<int> left=LCA(root->left,n1,n2);
    vector<int> right=LCA(root->right,n1,n2);
    if(!left.empty() && !right.empty()){
        return {root->data};
    }
    if(!left.empty()){
        left.push_back(root->data);
        return left;
    }
    if(!right.empty()){
        right.push_back(root->data);
        return right;
    }
    return {};
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    int n1=4,n2=5;
    vector<int> lca=LCA(root,n1,n2);
    if(lca.empty()){
        cout<<"LCA not found"<<endl;
    }
    else{
        cout<<"LCA of "<<n1<<" and "<<n2<<" is "<<lca[0]<<endl;
    }
    return 0;
}