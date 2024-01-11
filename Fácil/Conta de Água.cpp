#include <iostream>

using namespace std;

int main()
{
    int n,soma = 0;
    cin >> n;

    if (n <= 10)
        cout << 7;

    else if (n <= 30)
        cout << (n-10)+7;

    else if (n <= 100)
        cout << 7 + 20 + ((n-30)*2);
    
    else
        cout << 7 + 20 + 140 + ((n-100)*5);
    
}
