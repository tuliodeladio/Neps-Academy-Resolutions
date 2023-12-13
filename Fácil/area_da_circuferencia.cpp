#include <iomanip>
#include<iostream>

using namespace std;

int main()
{
    double a;
    cin >> a;
    a = a * a * 3.1416;
    cout << fixed << setprecision(2) << a;
    return 0;
}
