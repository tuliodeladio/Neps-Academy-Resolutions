#include <iostream>

using namespace std;

int main() {


    int n;
    cin >> n;
    
    char mapa[n][n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> mapa[i][j];
        }
    }


    bool direita = true;
    int max = 0;
    int contadorComida = 0;
    
    for (size_t i = 0; i < n; i++)
    {
        if (direita == true) {
            for (size_t y = 0; y < n; y++)
            {
                char atual = mapa[i][y];
                if (atual == 'o') {
                    contadorComida++;
                }
                else if (atual == 'A') {
                    if (max < contadorComida)
                        max = contadorComida;
                    contadorComida = 0;
                }
            }
            direita = false;
        }

        else if (direita == false) {
            for (int y = n-1; y >= 0; y--)
            {
                char atual = mapa[i][y];
                if (atual == 'o') {
                    contadorComida++;
                }
                else if (atual == 'A') {
                    if (max < contadorComida)
                        max = contadorComida;
                    contadorComida = 0;
                }
            }
            direita = true;
        }
    }

    if (contadorComida > max)
        max = contadorComida;
    
    cout << max;
    

    return 0;
}
