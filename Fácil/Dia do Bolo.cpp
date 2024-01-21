#include <iostream>

using namespace std;

int main()
{
    long double q;
    int c,g;
    cin >> q >> c >> g;

    q=q*1000;

    if ((c*g) > q)
        cout << 'N';
    else
        cout << 'S';
    
    
    return 0;
}
