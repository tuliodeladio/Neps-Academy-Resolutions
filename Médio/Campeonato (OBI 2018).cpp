#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int jogador1, jogador2;

    for (int i = 0; i <= 15; i++) {
        int n;
        cin >> n;
        if (n == 1)
            jogador1 = i;
        else if (n == 9)
            jogador2 = i;
    }

    /*  12/2=6 13/2=6    14/2 = 7 15/2 = 7*/

    if (jogador1 > jogador2)
        swap(jogador1, jogador2);

    if ((jogador1) / 8 == (jogador2) / 8) {
        if ((jogador1) / 4 == (jogador2) / 4) {
            if ((jogador1) / 2 == (jogador2) / 2) {
                cout << "oitavas" << endl;
            } else {
                cout << "quartas" << endl;
            }
        } else {
            cout << "semifinal" << endl;
        }
    } else {
        cout << "final" << endl;
    }

    return 0;
}
