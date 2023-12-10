#include <iostream>

using namespace std;

int main()
{
    int n, soma = 0;

    cin >> n;

    for (int i = 1; i < n+1; i++)
    {
        soma += i;
    }

    cout << soma;
    
    return 0;
}
