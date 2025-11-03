#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
Node* minDiff(Node* root, int K) {
    Node* current = root;
    Node* closest = nullptr;
    int minDiff = INT_MAX;

    while (current != nullptr) {
        int currentDiff = abs(current->data - K);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            closest = current;
        }
        if (K < current->data)
            current = current->left;
        else
            current = current->right;
    }
    return closest;
}
int main() {
    Node* root = nullptr;
    vector<int> vals = {5, 3, 6, 2, 4, 7};
    int no=9;

     Node* closestNode = minDiff(root, no);
     if (closestNode != nullptr) {
        cout << "Node with minimum difference to " << no << " is: " << closestNode->data << endl;
    } else {
        cout << "Tree is empty." << endl;
    }
    // for (int val : vals)
    //     root = insert(root, val);

    // cout << "Tree (Inorder): ";
    // inorder(root);
    // cout << endl;

    // root = deleteNode(root, no);

    // cout << "After deleting "<<no<<" : ";
    // inorder(root);
    // cout << endl;

    return 0;
}
