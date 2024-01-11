#include <iostream>

using namespace std;

int main()
{
    int a,b,c,h,l;
    cin >> a >> b >> c >> h >> l;

    if ((b <= h and c <= l) or (b <= l and c <= h) or (a <= l and c <= h) or (c <= l and a <= h) or (a <= l and b <= h) or (b <= l and a <= h))
        cout << 'S';
    else
        cout << 'N';
    
    return 0;
}
