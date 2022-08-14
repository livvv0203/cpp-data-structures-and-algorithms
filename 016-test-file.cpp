#include <iostream>
#include <string>
using namespace std;

int main() {

    string name = "Olivia";
    char grade = 'A';
    const int BIRTH_YEAR = 2022;

    cout << "Hi" << endl;
    cout << "Some more..." << endl;
    cout << (int)3.14 << endl;

    // Pointer - Memory Address
    int num = 10;
    cout << &num << endl; // Memory Address of the integer

    int *pNum = &num; 
    cout << pNum << endl; // Address
    cout << *pNum << endl; // Dereferencing - 10

    int num1, num2;
    cout << "Enter 1st Number: " << endl;
    cin << num1;
    cout << "Enter 2nd Number: " << endl;
    cin << num2;
    cout << "Sum #1 and #2: " << num1 + num2 << endl;

    return 0;
}










