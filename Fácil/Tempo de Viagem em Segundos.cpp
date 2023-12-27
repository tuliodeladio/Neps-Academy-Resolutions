#include <iostream>

using namespace std;

int main()
{
    int d1, h1, m1, d2, h2, m2;

    cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;
    int segundos1 = (d1 * 24 * 60 * 60) + (h1 * 60 * 60) + (m1 * 60);

    int segundos2 = (d2 * 24 * 60 * 60) + (h2 * 60 * 60) + (m2 * 60);

    cout << (segundos2-segundos1);

    return 0;
}
