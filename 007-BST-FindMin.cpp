#include<iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

int FindMin(BstNode* root) {
    if (root == NULL) {
        cout << "Empty Tree!\n";
        return -1;
    } else if(root -> left == NULL) {
        return root -> data;
    }

    // Recursivly, search in left subtree
    return FindMin(root -> left);
}

int main() {

}











