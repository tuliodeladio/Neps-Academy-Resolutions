#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a < 801)
        cout << 1;
    else if (a < 1401)
        cout << 2;
    else    
        cout << 3;  

    return 0;
}
