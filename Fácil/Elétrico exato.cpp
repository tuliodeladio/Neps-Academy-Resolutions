#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a1,b1,a2,b2,m;
    cin >> a1 >> b1 >> a2 >> b2 >> m;

    if ((abs(a2-a1) + abs(b2-b1)) % 2 == m % 2 and m >= abs(a2 - a1) + abs(b2 - b1))
        cout << "Y";
    else
        cout << "N";
    
    
    return 0;
}
