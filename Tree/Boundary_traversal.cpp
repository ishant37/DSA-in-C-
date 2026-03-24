#include<iostream>
#include "Node.h"

#include<vector>
using namespace std;
bool isLeaf(Node* root){
    return !root->left && !root->right;
}
void leftTraversal(Node* root,vector<int>& res){
    Node* curr=root;
    while(isLeaf(curr)){
        res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}
void rightTraversal(Node* root,vector<int>& res){
    Node* curr=root;
    vector<int>temp;
    while(isLeaf(curr)){
        temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}
void leafTraversal(Node* root,vector<int>& res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) leafTraversal(root->left,res);
    if(root->right) leafTraversal(root->right,res);
}
int main(){
    vector<int> res;
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    leftTraversal(root,res);
    leafTraversal(root,res);
    rightTraversal(root,res);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}