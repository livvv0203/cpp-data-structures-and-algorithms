#include <iostream>

/**
 * List as abstract datatype
 * 
 * 
 * 
 * 
 */

int main() {

    int A[] = {1, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << std::endl;
    }
    
    return 0;
}