#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    b = ((b*8)+(c*6))-a;

    if (b < 0)
        cout << 0;
    else
        cout << b;
    
    
    return 0;
}
