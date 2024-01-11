#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double kml,d,t; 

    cin >> kml >> d >> t;

    if (t == 0)
        cout << fixed << setprecision(1) << d/kml;
    else {
        if (d-(t*kml) < 0)
            cout << fixed << setprecision(1) << 0.0;
        
        else
            cout << fixed << setprecision(1) << ((d-(t*kml))/kml);
        
    }

    return 0;
    
}
