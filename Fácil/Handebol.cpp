#include <iostream>

using namespace std;

int main()
{
    int n,m,j=0;
    cin >> n >> m;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        bool k = true;
        for (size_t i = 0; i < m; i++)
        {
            cin >> x;
            if (x == 0) {
                k = false;
            }
        }
        if (k)
            j++;
    }
    

    cout  << j;
    
    return 0;
}
