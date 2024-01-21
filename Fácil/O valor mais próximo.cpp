#include <iostream>

using namespace std;

int main()
{
    int x,l,r;
    cin >> x >> l >> r;

    if (x >= l and x <= r)
        cout << x;
    
    else if (x < l)
        cout << l;
    else
        cout << r;
    
    
    return 0;
}
