#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

static int idx=0;
Node* buildTree(vector<int> &preorder){
    if(idx>=preorder.size() || preorder[idx]==-1){
        idx++;
        return NULL;
    }
    Node* root=new Node(preorder[idx++]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
Node* preOrder(Node* root){
    if(root==NULL){
        return NULL;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
Node* inorder(Node* root){
    if(root==NULL){
        return NULL;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* postorder(Node* root){
    if(root==NULL) return NULL;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    postorder(root);
    cout<<endl;

    return 0;
}