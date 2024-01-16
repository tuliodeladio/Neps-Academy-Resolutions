#include <iostream>

using namespace std;

int main()
{
    int a = 100,n,maior=100;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a+=x;
        if (a > maior)
            maior=a;
    }

    cout << maior;
    
    return 0;
}
