#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, porcentagem;

    while (cin >> x) {
        if (x == 0)
            break;

        cin >> y >> porcentagem;

        int area_casa = x * y;

        int lado_minimo = floor(sqrt((double)area_casa * 100 / porcentagem));


        cout << lado_minimo << endl;
    }

    return 0;
}
