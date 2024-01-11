#include <iostream>

using namespace std;

int main()
{
    int v,t,x;
    cin >> v >> t;

    for (size_t i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v+=x;
        if (v > 100)
            v = 100;
        else if (v < 0) 
            v = 0;
    }
    
    cout << v;
    
    return 0;
}
