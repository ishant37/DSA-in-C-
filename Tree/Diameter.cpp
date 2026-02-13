#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;     
    Node* left;   
    Node* right;  
  
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

int main(){
    Node *root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    
}