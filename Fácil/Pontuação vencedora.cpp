#include <iostream>

using namespace std;

int main()
{

    int a[2] = {0,0};
    
    for (int& i : a) {
        int x;
        cin >> x; i+=x*3;
        cin >> x; i+=x*2;
        cin >> x; i+=x*1;
    }

    if (a[0] > a[1])
        cout << 'A';
    else if (a[0] < a[1])
        cout << 'B';
    else
        cout << 'T';

    return 0;
}
