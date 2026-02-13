#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
int totalSum(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return root->data + totalSum(root->left) + totalSum(root->right);
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    int sum = totalSum(root);
    cout << "Total Sum of all nodes: " << sum << endl;

    return 0;
}

// Time Complexity: O(n), where n is the number of nodes in the tree.
// Space Complexity: O(h), where h is the height of the tree due to recursion stack
// Tree structure:
//         10
//        /  \
//      20    30
//     /  \
//   40    50
// Total Sum = 10 + 20 + 30 + 40 + 50 = 150

// Output:
// Total Sum of all nodes: 150