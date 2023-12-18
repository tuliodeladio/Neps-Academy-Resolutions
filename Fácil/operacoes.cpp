#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char r;
    double a, b;
    cin >> r >> a >> b;

    if (r == 'M')
        a = a * b;
    else
        a = a / b;

    cout << fixed << setprecision(2) << a;


    return 0;
}
