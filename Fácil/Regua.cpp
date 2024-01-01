#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;

    int m = abs(y-z);

    if (m >= x)
        cout << "EH SUFICIENTE";
    else
        cout << "NAO EH SUFICIENTE";
    
    return 0;

}
