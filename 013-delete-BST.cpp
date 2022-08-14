#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

struct Node* Delete(Node* root, int data) {

    if (root == NULL) return root;
    else if (data < root -> data) root -> left = Delete(root -> left, data);
    else if (data > root -> data) root -> right = Delete(root -> right, data);
    else // Found the one!
        {
            // Case 1: No child
            if (root -> left == NULL && root -> right == NULL) {
                delete root; // free the memory space
                root = NULL;
            }
            // Case 2: One child
            else if (root -> left == NULL) {
                struct Node *temp = root;
                root = root -> right; // Copy the child on right
                delete temp;
            }

            else if (root -> right == NULL) {
                struct Node *temp = root;
                root = root -> left;
                delete temp;
            }

            // Case 3: Two Children
            else {
                struct Node* temp = FindMin(root -> right);
                root -> data = temp -> data;
                root -> right = Delete(root -> right, temp -> data);
            }

        }
        return root;
}

struct Node* FindMin(Node* root) {

    if (root -> right == NULL) 
        return root;
    else 
        return FindMin(root -> right);
};

int main() {



}






