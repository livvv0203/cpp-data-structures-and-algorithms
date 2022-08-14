#include <iostream>
using namespace std;

// Reference type of an existing variable
void Increment(int& value) {
    value++;
}

int main() {

    int a = 5;
    Increment(a);
    cout << a << endl;

    return 0;

}

    







