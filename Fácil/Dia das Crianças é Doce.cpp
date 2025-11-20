#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int sobras[n];

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        sobras[i] = x%y;
    }

    sort(sobras,sobras+n);
     
    cout << sobras[k-1];
    
    return 0;
}
