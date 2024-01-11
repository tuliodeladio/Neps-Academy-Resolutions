#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int l,m;
    double c;
    cin >> l >> m;

    c = l*0.3;
    int d = c;

    if (c >= m)
        cout << d;
    else
        cout << 0;
    
    return 0;
}
