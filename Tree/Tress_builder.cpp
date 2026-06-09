#include<iostream>
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* root=new Node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void preOrder(Node *root,vector<int>& ans){
    while (root!=NULL)
    {
    ans.push_back(root->data);
    preOrder(root->left,ans);
    preOrder(root->right,ans);
    }
    return ans;
}
int main(){
    Node* root=buildTree();
    cout<<"Preorder: ";
    preOrder(root);
}