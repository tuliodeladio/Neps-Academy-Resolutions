#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m,m1=0,h=0;
    cin >> m;
    h = m/60;
    m1 = m%60;

    cout << h << endl << m1;
}
