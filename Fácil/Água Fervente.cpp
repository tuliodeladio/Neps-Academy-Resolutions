#include <iostream>

using namespace std;

int main()
{
    int b;
    cin >> b;
    int r = (5*b)-400;

    cout << r << endl;

    if (r < 100)
        cout << 1;
    else if (r > 100)
        cout << -1;
    else
        cout << 0;
    return 0;
}
