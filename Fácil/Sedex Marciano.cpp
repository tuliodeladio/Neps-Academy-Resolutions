#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    double l, a, p, r;
    cin >> l >> a >> p >> r;

    double x = sqrt(l*l + a*a + p*p);

    if (x <= 2 * r)
        cout << 'S';
    else
        cout << 'N';

    return 0;
}
