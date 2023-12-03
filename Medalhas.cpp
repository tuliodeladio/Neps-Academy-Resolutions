#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    if (A > B && B > C)
    {
        if (B > C)
            cout << 3 << 2 << 1 << endl;
        else
            cout << 3 << 1 << 2 << endl;
    }
    if (A < B && B > C)
    {
        if (A > C)
            cout << 2 << 3 << 1 << endl;

        else
            cout << 1 << 3 << 2 << endl;
    }
    else {
        if (A > B)
            cout << 2 << 1 << 3 << endl;

        else
            cout << 1 << 1 << 2 << endl;
    }

    return 0;
}
