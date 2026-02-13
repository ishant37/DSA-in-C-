// C++ program to find sum of
// all paths from root to leaves 
#include <bits/stdc++.h>
using namespace std;

class Node { 
public:
    int data; 
    Node *left, *right; 
    Node (int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; 

// Function which returns the sum of root to leaf path.
int treePathsSum(Node* root) {
    
    // base case
    if (root == nullptr) return 0;
    
    // Store pair of node and value
    // associated with it.
    stack<pair<Node*,int>> st;
    st.push({root, 0});
    
    int ans = 0;
    
    while (!st.empty()) {
        pair<Node*,int> top = st.top();
        st.pop();
        Node* curr = top.first;
        int val = top.second;
        
        // update the value
        val = val*10 + curr->data;
        
        // if current node is leaf node, 
        // then add the value to result.
        if (curr->left == nullptr && curr->right == nullptr) {
            ans += val;  
            continue;
        }
        
        if (curr->right != nullptr) {
            st.push({curr->right, val});
        }
        
        if (curr->left != nullptr) {
            st.push({curr->left, val});
        }
    }
    
    return ans;
}

int main()  { 
    
    // Hard coded binary tree.
    //          6
    //        /  \
    //       3    5
    //     /  \    \
    //    2   5     4  
    //       / \
    //      7   4
    Node* root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(5);
    root->right->right = new Node(4);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);
    
    cout << treePathsSum(root) << endl;
    
    return 0; 
}