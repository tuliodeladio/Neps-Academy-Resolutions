#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(8);

    for (size_t i = 0; i < 8; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (next_permutation(a.begin(), a.end())) {
        bool x = true;

        for (size_t i = 1; i < 8; i++) {

            if (a[i] == a[i - 1]) {
                x = false;
                break;
            }
        }

        if (x) {

            cout << "S";
            return 0;

        }
    }

    cout << "N";

    return 0;
}
