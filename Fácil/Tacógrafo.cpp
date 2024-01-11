#include <iostream>

using namespace std;

int main()
{
    int n,soma=0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        soma += x*y;
    }

    cout << soma;
    
    return 0;
}
