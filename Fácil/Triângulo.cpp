#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[4];
    
    for (auto& i : a)
        cin >> i;

    sort(a, a + 4);

    if (a[0] + a[1] > a[2] && a[0] + a[2] > a[1] && a[1] + a[2] > a[0])
        cout << "S";
    else if (a[1] + a[2] > a[3] && a[1] + a[3] > a[2] && a[2] + a[3] > a[1])
        cout << "S";
    else
        cout << "N";

    return 0;
}
