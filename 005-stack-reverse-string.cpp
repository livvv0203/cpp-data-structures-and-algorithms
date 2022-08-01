#include<stack>
#include<iostream>

using namespace std;

void Reverse(char *C, int n) {
    stack<char> S;
    // loop for push
    for (int i = 0; i < n; i++) {
        S.push(C[i]);
    }
    // loop for pop
    for (int i; i < n; i++) {
        C[i] = S.top(); // overwrite
        S.pop(); // perform pop
    }
}

int main() {
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output = %s", C);
}




