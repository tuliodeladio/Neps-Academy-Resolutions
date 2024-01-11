#include <iostream>

using namespace std;

int main()
{
    int nm;
    double f = 1000;

    for (size_t i = 0; i < 2; i++)
    {
        double x,y,z;
        cin >> x >> y >> z;
        if (y/z < f) {
            f = y/z;
            nm = x;
        }
    }
    
    cout << nm;
    return 0;
}
