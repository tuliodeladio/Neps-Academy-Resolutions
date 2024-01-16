#include <iostream>

using namespace std;

int main()
{
    double a,g,ra,rg;
    cin >> a >> g >> ra >> rg;

    a = ra/a;
    g = rg/g;

    if (g < a)
        cout << 'A';
    else
        cout << 'G';
    return 0;
}
