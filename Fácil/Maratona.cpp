#include <iostream>

using namespace std;

int main()
{
    int n,m,ant=0;
    cin >> n >> m;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x-ant > m)
        {
            cout << 'N';
            return 0;
        }
        ant = x;
        
    }

    if (42195-ant > m)
    {
        cout << 'N';
        return 0;
    }

    cout << 'S';
    return 0;
}
