#include <iostream>

using namespace std;

int main()
{
    int d,dp,kml,vp;
    cin >> d >> dp >> kml >> vp;
    
    cout << ((d/dp)*vp)+(d*kml);
    return 0;
}
