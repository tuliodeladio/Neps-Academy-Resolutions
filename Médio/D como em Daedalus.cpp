#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    int pessoas,jogos;
    cin >> pessoas >> jogos;

    int opcs[] = {10000,1000,100,10,1};

    int pontos_extras = 0;

    for (size_t i = 0; i < jogos; i++)
    {
        int budget, Daedalus, somaOutras = 0;
        cin >> budget >> Daedalus;

        for (size_t j = 0; j < pessoas-1; j++)
        {
            int x;
            cin >> x;
            somaOutras += x;
        }

        for (auto estimativaDi : opcs) {
            if (somaOutras+estimativaDi <= budget) {

                if (estimativaDi > Daedalus)
                    pontos_extras += (estimativaDi-Daedalus);

                else if (estimativaDi < Daedalus)
                    pontos_extras+=estimativaDi;

                break;
            }
        }



    }

    cout << pontos_extras;
    
}
