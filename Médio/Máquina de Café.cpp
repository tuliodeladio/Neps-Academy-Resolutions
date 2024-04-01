#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;

    int r[3];
    r[0] = a2*2 + a3 *4;
    r[1] = a1*2 + a3 *2;
    r[2] = a1*4 + a2 *2;


    cout << *min_element(r, r+3);

    return 0;
}

