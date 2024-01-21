#include <iostream>

using namespace std;

int main()
{
    int n,a,soma=0;
    cin >> a >> n;
    soma+=a;

    for (size_t i = 0; i < n; i++)
    {
        a*=10;
        soma+=a;
    }

    cout << soma;
    
    
    return 0;
}
