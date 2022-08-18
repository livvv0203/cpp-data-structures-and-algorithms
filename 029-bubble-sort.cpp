#include <iostream>
using namespace std;

/**
 * @brief Bubble Sort 
 * 
 * @return int 
 */

void bubbleSort(int A[], int n) {

    int i;
    int j;
    for (i = 0; i < n - 1; i++) {
        // The last i element is already in place
        for (j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
};

int main() {

    int arr[] = {5, 4, 2, 4, 5, 6, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << endl;
    }
    cout << "-------------" << endl;

    bubbleSort(arr, len);

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}