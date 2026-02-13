// C++ program to construct a binary tree 
// using inorder and postorder traversals

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

// Function to recursively build the tree from
// inorder and postorder traversals
Node* buildUtil(vector<int>& inorder, vector<int>& postorder, int inStrt, 
                int inEnd, int& pIndex, unordered_map<int, int>& mp) {
  
    // if start index exceeds end index, return NULL
    if (inStrt > inEnd)
        return NULL;

    // Get the current node value from postorder 
  	// traversal using pIndex and decrement pIndex
    int curr = postorder[pIndex];
    Node* node = new Node(curr); 
    pIndex--;

    // If the current node has no children 
  	// (inStrt == inEnd), return the node
    if (inStrt == inEnd)
        return node;

    // Find the index of the current node's
  	// value in the inorder traversal
    int iIndex = mp[curr];

    // Recursively build the right and left subtrees
    node->right = buildUtil(inorder, postorder, iIndex + 1, inEnd, pIndex, mp);  
    node->left = buildUtil(inorder, postorder, inStrt, iIndex - 1, pIndex, mp);  

    return node;  
}

// Main function to build the binary tree 
// from inorder and postorder vectors
Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int len = inorder.size();  
    
  	// Create an unordered map to store the 
  	// indexes of inorder elements for quick lookup
    unordered_map<int, int> mp;
    for (int i = 0; i < len; i++)
        mp[inorder[i]] = i;

    // Initialize postorder index as the last element
    int postIndex = len - 1;
    
    // Call the recursive utility function to build the tree
    return buildUtil(inorder, postorder, 0, len - 1, postIndex, mp);
}

void print(Node* curr) {
    if (curr == nullptr)
        return;
    cout<< curr->data << " ";
    print(curr->left);
    print(curr->right);
}

int main() {
  
    vector<int> inorder = { 4, 8, 2, 5, 1, 6, 3, 7 };
    vector<int> postorder = { 8, 4, 5, 2, 6, 7, 3, 1 };
    Node* root = buildTree(inorder, postorder);
    print(root);

    return 0;
}