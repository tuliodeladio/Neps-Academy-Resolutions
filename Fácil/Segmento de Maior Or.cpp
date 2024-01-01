#include <iostream>

using namespace std;

int main()
{
    int n, maior = 0,x;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        maior = maior | x;
    }
    cout << maior;

    return 0;
}