#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n = 0, f = 1, poww = 0;
    cin >> n >> poww;

    f = pow(n, poww);

    cout << fixed << setprecision(4) << f << endl;

    return 0;
}
