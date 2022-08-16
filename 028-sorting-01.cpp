#include <iostream>
using namespace std;

// Selection Sort - the simplest 
// O(n^2)
void SelectionSort(int A[], int n) {
    // Todo n - 2 passes
    for (int i = 0; i < n - 1; i++) {
        int iMin = i; // ith position as current minimum
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[iMin])
                iMin = j; // Update the index of min element
        }
        // swap i and iMin - in place swap
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
};

int main() {

    int A[] = {2, 7, 4, 1, 5, 3};

    SelectionSort(A, 6);

    for (int i = 0; i < 6; i++) {
        cout << A[i] << " " << endl;
    }
}




