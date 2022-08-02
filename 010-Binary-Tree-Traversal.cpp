#include <iostream>
#include <queue>

using namespace std;
/**
 * @brief Tree Traversal
 * process of visiting each node in the tree exactly once in some order
 * 
 * visit -> means to read/process data in a node
 * B-first: Traverse by level
 * Depth-first: Traverse by 
 */

/**
 * @brief Defining a Node from a Binary Tree 
 * 
 * Level Order - Set a Pointer name current and keep moving it 
 */

struct Node {
    char data;
    Node *left;
    Node *right;
}; 

// Pass address of the root of argument
void LevelOrder(Node* root) {

    // Tree is empty
    if (root == NULL) return;
    
    // Create a Queue
    queue<Node*> Q;
    Q.push(root); // Insert the address of the root node

    // While there is at least one discovered node
    while(!Q.empty()) {
        // Take a node from the front, as current pointer 
        Node* current = Q.front();
        cout << current -> data << " ";

        // left child not null, push address into the queue
        if (current -> left != NULL) Q.push(current -> left);
        if (current -> right != NULL) Q.push(current -> right);
        Q.pop(); // removing element at front
    } 
}

int main() { 

    // To test Level Order function


}







