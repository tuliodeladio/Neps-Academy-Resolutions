#include <iostream>

using namespace std;

int main()
{
    int a[6];
    
    for (int& i : a)
        cin >> i;

    if (a[0] > a[3] or a[1] > a[4] or a[2] > a[5])
        cout << 0;
    else {
        cout << (a[3]/a[0])*(a[4]/a[1])*(a[5]/a[2]);
    }
    
    return 0;
}
