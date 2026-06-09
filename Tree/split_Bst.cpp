// C++ program to split a BST into
// two balanced BSTs based on a value K

#include <iostream>
using namespace std;

// Structure of each node of BST
struct node {
    int key;
    struct node *left, *right;
};

// A utility function to
// create a new BST node
node* newNode(int item)
{
    node* temp = new node();
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to insert a new
// node with given key in BST
struct node* insert(struct node* node,
                    int key)
{
    // If the tree is empty, return a new node
    if (node == NULL)
        return newNode(key);

    // Otherwise, recur down the tree
    if (key < node->key)
        node->left = insert(node->left,
                            key);
    else if (key > node->key)
        node->right = insert(node->right,
                             key);

    // return the (unchanged) node pointer
    return node;
}

// Function to return the size
// of the tree
int sizeOfTree(node* root)
{
    if (root == NULL) {
        return 0;
    }

    // Calculate left size recursively
    int left = sizeOfTree(root->left);

    // Calculate right size recursively
    int right = sizeOfTree(root->right);

    // Return total size recursively
    return (left + right + 1);
}

// Function to store inorder
// traversal of BST
void storeInorder(node* root,
                  int inOrder[],
                  int& index)
{
    // Base condition
    if (root == NULL) {
        return;
    }

    // Left recursive call
    storeInorder(root->left,
                 inOrder, index);

    // Store elements in inorder array
    inOrder[index++] = root->key;

    // Right recursive call
    storeInorder(root->right,
                 inOrder, index);
}

// Function to return the splitting
// index of the array
int getSplittingIndex(int inOrder[],
                      int index, int k)
{
    for (int i = 0; i < index; i++) {
        if (inOrder[i] >= k) {
            return i - 1;
        }
    }
    return index - 1;
}

// Function to create the Balanced
// Binary search tree
node* createBST(int inOrder[],
                int start, int end)
{
    // Base Condition
    if (start > end) {
        return NULL;
    }

    // Calculate the mid of the array
    int mid = (start + end) / 2;
    node* t = newNode(inOrder[mid]);

    // Recursive call for left child
    t->left = createBST(inOrder,
                        start, mid - 1);

    // Recursive call for right child
    t->right = createBST(inOrder,
                         mid + 1, end);

    // Return newly created Balanced
    // Binary Search Tree
    return t;
}

// Function to traverse the tree
// in inorder fashion
void inorderTrav(node* root)
{
    if (root == NULL)
        return;
    inorderTrav(root->left);
    cout << root->key << " ";
    inorderTrav(root->right);
}

// Function to split the BST
// into two Balanced BST
void splitBST(node* root, int k)
{

    // Print the original BST
    cout << "Original BST : ";
    if (root != NULL) {
        inorderTrav(root);
    }
    else {
        cout << "NULL";
    }
    cout << endl;

    // Store the size of BST1
    int numNode = sizeOfTree(root);

    // Take auxiliary array for storing
    // The inorder traversal of BST1
    int inOrder[numNode + 1];
    int index = 0;

    // Function call for storing
    // inorder traversal of BST1
    storeInorder(root, inOrder, index);

    // Function call for getting
    // splitting index
    int splitIndex
        = getSplittingIndex(inOrder,
                            index, k);

    node* root1 = NULL;
    node* root2 = NULL;

    // Creation of first Balanced
    // Binary Search Tree
    if (splitIndex != -1)
        root1 = createBST(inOrder, 0,
                          splitIndex);

    // Creation of Second Balanced
    // Binary Search Tree
    if (splitIndex != (index - 1))
        root2 = createBST(inOrder,
                          splitIndex + 1,
                          index - 1);

    // Print two Balanced BSTs
    cout << "First BST : ";
    if (root1 != NULL) {
        inorderTrav(root1);
    }
    else {
        cout << "NULL";
    }
    cout << endl;

    cout << "Second BST : ";
    if (root2 != NULL) {
        inorderTrav(root2);
    }
    else {
        cout << "NULL";
    }
}

// Driver code
int main()
{
    /*  BST 
             5
           /   \      
          3     7     
         / \   / \    
         2  4  6  8  
    */
    struct node* root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    insert(root, 6);
    insert(root, 8);

    int k = 5;

    // Function to split BST
    splitBST(root, k);

    return 0;
}