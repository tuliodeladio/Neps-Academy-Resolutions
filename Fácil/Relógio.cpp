#include <iostream>
using namespace std;

int main() {
    int h, m, s, adicional;
    cin >> h >> m >> s >> adicional;

    s += adicional;

    m += s / 60;
    s = s % 60;

    h += m / 60;
    m = m % 60;

    h = h % 24;

    cout << h << endl << m  << endl << s << endl;
    return 0;
}
