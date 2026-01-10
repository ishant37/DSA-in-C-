#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Info{
    public:
    int size;
    int max;
    int min;
    int ans;
    bool isBST;

    Info(int sz, int mx, int mn, int a, bool isB){
        size=sz;
        max=mx;
        min=mn;
        ans=a;
        isBST=isB;
    }
};
Info largestBSTinBT(Node* root){
    // base case
    if(root == NULL){
        return Info(0, INT_MIN, INT_MAX, 0, true);
    }

    // leaf node
    if(root->left == NULL && root->right == NULL){
        return Info(1, root->data, root->data, 1, true);
    }

    // recursive calls for left and right subtrees
    Info leftInfo = largestBSTinBT(root->left);
    Info rightInfo = largestBSTinBT(root->right);

    Info curr(0, 0, 0, 0, false);
    curr.size = (1 + leftInfo.size + rightInfo.size);

    // check if the subtree rooted at current node is BST
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data){
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }

    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}
int main(){
    /*
            50
           /  \
         30    60
        / \    / \
      5   20  45  70
                   / \
                 65   80
    */

    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    Info largestBST = largestBSTinBT(root);
    cout << "Size of the largest BST is: " << largestBST.ans << endl;

    return 0;
}

// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(h), where h is the height of the binary tree due to recursive
// function call stack.
// Output: Size of the largest BST is: 5
// Explanation: The largest BST subtree is:
//         60
//        /  \
//      45    70
//            / \
//          65   80
// which has 5 nodes.