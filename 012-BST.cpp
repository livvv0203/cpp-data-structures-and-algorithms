#include <iostream>
/**
 * @brief Binary Tree
 * Each node can have at most two children
 * 
 * BST - value of all the nodes in left subtree is less or equal, 
 * value of all nodes in right are greater
 * 
 * @return int 
 */

struct Node {
    int data;
    Node *left;
    Node *right;
};

bool IsSubtreeLesser(Node* root, int value) {
    if (root == NULL) return true;
    if (root -> data <= value
        && IsSubtreeLesser(root -> left, value)
        && IsSubtreeLesser(root -> right, value))

        return true;
    else 
        return false;
};

bool IsSubtreeGreater(Node* root, int value) {
    if (root == NULL) return true;
    if (root -> data > value
        && IsSubtreeGreater(root -> left, value)
        && IsSubtreeGreater(root -> right, value))
        return true;    
    else
        return false;   
};

bool IsBinarySearchTree(Node* root, int minValue, int maxValue) {

    if (root == NULL) return true;

    if (root -> data > minValue // take constant time
        && root -> data < maxValue
        && IsBinarySearchTree(root ->left, minValue, root -> data)
        && IsBinarySearchTree(root -> right, root -> data, maxValue))

        return true; 
    else
        return false;
}

int main() {

}

















