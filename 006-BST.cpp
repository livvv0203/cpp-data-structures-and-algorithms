#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *GetNewNOde(int data)
{
    BstNode *newNode = new BstNode(); // Pointer of BstNode created
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode; // return the address of new Node
}

BstNode *Insert(BstNode *root, int data)
{
    // Passing address of the root node and data to be inserted
    if (root == NULL)
    {
        root = GetNewNOde(data); // Setting root as address of the new node
    }
    // Tree is not empty - insert either to the left or right
    else if (data <= root->data)
    {
        // Recrusivly insert to left subtree
        root->left = Insert(root->left, data);
    }
    else
    {
        // Add to the right sub tree
        root->right = Insert(root->right, data);
    }
    return root; // to the main function
}

// Found or not found
bool Search(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int main()
{

    BstNode *root = NULL;    // To store address of the root node - pointer of root
    root = Insert(root, 15); // address of the created new node
    root = Insert(root, 10);
    root = Insert(root, 20);
}
