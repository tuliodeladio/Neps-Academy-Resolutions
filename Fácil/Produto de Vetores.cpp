#include <iostream>

using namespace std;

int main()
{
    long long int a[2], b[2];
    
    cin >> a[0] >> a[1] >> b[0] >> b[1];

    cout << (a[0]*b[0]) + (a[1]*b[1]) << ' ' << (a[0]*b[1]) - (a[1]*b[0]);
    
    return 0;
}
