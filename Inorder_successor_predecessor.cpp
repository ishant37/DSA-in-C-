#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

TreeNode* rightmostInLeftSubtree(TreeNode* root) {
    while (root && root->right)
        root = root->right;
    return root;
}

TreeNode* leftmostInRightSubtree(TreeNode* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

vector<int> getSuccPre(TreeNode* root, int key) {
    TreeNode *pre = NULL, *succ = NULL;
    TreeNode *curr = root;

    while (curr) {
        if (key < curr->data) {
            succ = curr;
            curr = curr->left;
        }
        else if (key > curr->data) {
            pre = curr;
            curr = curr->right;
        }
        else {
            if (curr->left)
                pre = rightmostInLeftSubtree(curr->left);
            if (curr->right)
                succ = leftmostInRightSubtree(curr->right);
            break;
        }
    }

    return {
        pre ? pre->data : -1,
        succ ? succ->data : -1
    };
}

int main() {
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    int key = 3;
    vector<int> ans = getSuccPre(root, key);

    cout << "Predecessor: " << ans[0] << endl;
    cout << "Successor: " << ans[1] << endl;
}
