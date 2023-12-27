#include <iostream>

using namespace std;

int main()
{
    int a,b,c,h,l;
    cin >> a >> b >> c >> h >> l;

    if ((a <= h and b <= l) or (b <= h and a <= l))
        cout << 'S';
    else if ((a <= h and c <= l) or (c <= h and a <= l))
        cout << 'S';
    else if ((b <= h and c <= l) or (c <= h and b <= l))
        cout << 'S';
    else
        cout << 'N';

    return 0;
}
