#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to find Node with minimum value in a BST 
struct Node* FindMin(struct Node* root) {
    if (root == NULL) return NULL;
    while(root -> left != NULL) {
        root = root -> left;
    }
    return root; // return address of the min
}

struct Node* Find(struct Node* root, int data) {

};

// Find successor - Pass the data in current node - return address of the successor
struct Node* GetSuccessor(struct Node* root, int data) {

    // Search the Node - O(h)
    struct Node* current = Find(root, data); // Return pointer of the root data

    if (current == NULL) {
        // Data is not found in the tree
        return NULL;
    }

    // Case 1: Node has right subtree
    if (current -> right != NULL) {
        return FindMin(current -> right); // Passing the right subtree 
    } 

    // Case 2: Current Node has no right subtree - find the deepest ancestor 
    else {
        struct Node* successor = NULL;
        struct Node* ancestor = root;
        // Walk through the tree
        while(ancestor != current) {

            if (current -> data < ancestor -> data) {
                successor = ancestor;
                ancestor = ancestor -> left;
            }
            else {
                ancestor = ancestor -> right;
            }
        }
        return successor;
    }
} 

int main() {

}
















