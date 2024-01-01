#include <iostream>

using namespace std;

int main()
{
    int a1,d1,a2,d2,count = 0;
    cin >> a1 >> d1 >> a2 >> d2;

    if ((d1 != a2 && d2 != a1) or (d1 == a2 && d2 == a1))
        cout << -1;
    else if (d1 != a2 && d2 == a1)
        cout << 2;
    else
        cout << 1;

    return 0;

}
