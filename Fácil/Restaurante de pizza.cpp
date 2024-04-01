#include <iostream>

using namespace std;

int main()
{
    int a,b,r,aa;
    cin >> a >> b >> r >> aa;

    if (360%aa != 0)
        cout << 'N';
    else if (r*2 > a or r*2 > b)
        cout << 'N';
    else
        cout << 'S';
    
    
    return 0;
}
