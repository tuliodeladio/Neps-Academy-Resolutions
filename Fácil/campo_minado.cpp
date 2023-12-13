#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n+2];

    t[0] = 0;
    t[n+1] = 0;

    for (int i = 1; i < n+1; i++)
        cin >> t[i];

    for (int i = 1; i < n+1; i++)
    {
        int r = 0;

        if(t[i] == 1)
            r++;
        if(t[i-1] == 1)
            r++;
        if(t[i+1] == 1)
            r++;
        cout << r;

    }
    
    
    return 0;
}
