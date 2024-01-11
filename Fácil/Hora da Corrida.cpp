#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int v, n;
    cin >> v >> n;

    for (int i = 1; i <= 9; i++) {
        int placas_necessarias = ceil((i / 10.0) * (n*v));
        cout << placas_necessarias << " ";
    }

    return 0;
}
