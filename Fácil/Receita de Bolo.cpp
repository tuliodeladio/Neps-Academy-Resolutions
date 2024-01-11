#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    a[0] = a[0]/2;
    a[1] = a[1]/3;
    a[2] = a[2]/5;

    cout << *min_element(a, a+3);

    return 0;
}
