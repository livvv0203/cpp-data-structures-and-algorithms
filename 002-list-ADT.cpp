#include <iostream>

/**
 * List as abstract datatype
 * 
 * Empty list has size 0 - int end = -1
 * insert to a list 
 * remove
 * count
 * read/modify elements at a poistion
 * specify data-type
 * 
 */

int main() {

    // We can implement such dynamic list using arrays  
    int A[] = {1, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << std::endl;
    }
    
    return 0;
}













