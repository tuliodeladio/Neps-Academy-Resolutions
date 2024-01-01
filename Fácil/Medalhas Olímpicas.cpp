#include <iostream>

using namespace std;

int main()
{
    int a[3], b[3];

    for(int& i : a)
        cin >> i;
    for(int& i : b)
        cin >> i;

    if (a[0] > b[0])
        cout << 'A';

    else if (a[0] < b[0])
        cout << 'B';

    else {

        if (a[1] > b[1])
            cout << 'A';

        else if (a[1] < b[1])
            cout << 'B';

        else {

            if (a[2] > b[2])
                cout << 'A';

            else if (a[2] < b[2])
                cout << 'B';
        }
    }
    
    return 0;

    
}
