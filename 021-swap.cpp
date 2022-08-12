#include <iostream>
#include <string>
using namespace std;

// Passing reference type
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
};

int main() {

    int x = 0;
    int y = 1;
    cout << x << endl;
    cout << y << endl;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}



