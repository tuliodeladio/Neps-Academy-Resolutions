#include <iostream>


using namespace std;

int main()
{
    int a, n,soma = 0,k;
    cin >> a >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> k;
        soma+=k;
    }

    cout << ((n+1)*a)-soma;

    return 0;
    
}
