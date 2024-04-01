#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double x = a * cos(c) - b * sin(c);
    double y = a * sin(c) + b * cos(c);

    cout << x << ' ' << y;
    return 0;
}
