#include <iostream>
#include <cstdio>
using namespace std;

int Factorial(int n)
{
    cout << "Calculating Fac of ("<<n<<")\n";
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int F = n * Factorial(n - 1);
        return F;
    }
}

int main()
{
    int n;
    cout << "Give me an n: ";
    cin >> n;

    int result = Factorial(n);
    cout << result;
}








