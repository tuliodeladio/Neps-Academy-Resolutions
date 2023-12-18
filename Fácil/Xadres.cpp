#include <iostream>

using namespace std;

int main()
{
    int a, l;
    cin >> a >> l;

    if (a%2 == 0) {
        if (l%2 == 0)
            cout << 1;
        else
            cout << 0;
    }
    else {
        if (l%2 == 0)
            cout << 0;
        else
            cout << 1;
    }

}
