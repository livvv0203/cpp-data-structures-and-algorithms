/**
 * @file 003-linked-list.cpp
 * @author Jieqing Liu
 * @brief Linked List
 * @version 0.1
 * 
 * Each byte of memory has an address
 * integer var -> 4 bytes -> 4 x 8 = 32 bits
 * elements of a linked list are not continuous
 * 
 * Address of the head node, gives us the access of the complete list
 * 
 * Access to elements: O(n)
 * Insert a new ele: 
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

class Node {
    public: 
        int data;
        // type Node*: pointer
        Node* next; // or link
    };

int main() {

    // Declare a pointer to head node
    Node* A;
    
    A = NULL; // empty list

    // create a Node
    Node* temp = new Node();
    temp -> data = 2;
    temp -> next = NULL;

    A = temp;
    return 0;
}







