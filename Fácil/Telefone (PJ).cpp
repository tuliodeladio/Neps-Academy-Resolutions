#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;

    for (char i : a) {

        if (i == '-') {
            cout << i;
        }
        else {

            int x = static_cast<int>((i-'@'));
            
            if (x <= 3)
                cout << 2;
            else if ( x <= 6)
                cout << 3;
            else if ( x <= 9)
                cout << 4;
            else if ( x <= 12)
                cout << 5;
            else if ( x <= 15)
                cout << 6;
            else if ( x <= 19)
                cout << 7;
            else if ( x <= 22)
                cout << 8;
            else if ( x <= 26)
                cout << 9;
        }
    }
}