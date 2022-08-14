#include <iostream>
#include <vector>
#include <string>
using namespace std;

double division(int a, int b) {
    if (b == 0) {
        throw "b cannot be 0!";
    }

    return a / b;
}

int main() {

    try {
        division(10, 0);
    } catch (const char* errMsg) {
        cerr << errMsg << endl; 
    }

    return 0;
}







