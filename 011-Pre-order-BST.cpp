#include <iostream>

struct Node {
    char data;
    Node* left;
    Node* right;
};

/**
 * @brief Root -> left -> right
 * 
 * @param root 
 * Time Complexity - O(n)
 * Space Complexity - O(h), Worst Case O(n), Best case O(log(n))
 */
void PreOrder(struct Node* root) {
    if (root == NULL) return; // Tree is empty

    printf("%c", root -> data);
    PreOrder(root -> left); // Visit left subtree
    PreOrder(root -> right); // Visit right subtree
};

void InOrder(struct Node* root) {
    if (root == NULL) return;

    InOrder(root -> left);
    printf("%c", root -> data);
    InOrder(root -> right);
}

void PostOrder(struct Node* root) {
    if (root == NULL) return;

    InOrder(root -> left);
    InOrder(root -> right);
    printf("%c", root -> data);
}












