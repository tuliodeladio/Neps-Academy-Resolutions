#include <iostream>

using namespace std;

int main()
{
    int d,m;
    cin >> m >> d;

    if (m > 2)
        cout << "After";
    else if(m < 2)
        cout << "Before";
    else if (d < 18)
        cout << "Before";
    else if (d > 18)
        cout << "After";
    else
        cout << "Special";
    return 0;
}
