#include <iomanip>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int fib[n];
    fib[0] = 0, fib[1] = 1, fib[2] = 1;

    for (size_t i = 1; i < n; i++)
    {
        fib[i+1] = fib[i] + fib[i-1];
    }

    for (size_t i = 0; i < n; i++)
        cout << fib[i] << " ";
    
    
}
