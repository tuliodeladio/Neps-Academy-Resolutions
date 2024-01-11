#include <iostream>

using namespace std;

int main()
{
    int n,m,soma = 0,s,e;
    cin >> n >> m;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> e;
        
        soma-=s;
        soma+=e;

        if (soma > m) {
            cout << 'S';
            return 0;
        }
        
    }
    
    cout << 'N';
    return 0;
}
