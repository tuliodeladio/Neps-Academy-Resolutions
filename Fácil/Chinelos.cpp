#include <iostream>

using namespace std;

int main()
{
    int n,m,vendas=0;
    cin >> n;

    int a[n];

    for (int& i : a)
        cin >> i;

    cin >> m;

    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        if (a[x-1] > 0) {
            vendas++;
            a[x-1]--;
        }
    }

    cout  << vendas;
    
    
    
    
    return 0;
}
