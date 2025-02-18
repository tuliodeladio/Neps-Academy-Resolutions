#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <cmath>


using namespace std;


int main() {
    int p;
    cin >> p;

    int fatorialPs[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int fatorial = fatorialPs[p];


    map<int,int> mapaQTSX[p];

    for (size_t i = 0; i < p; i++)
    {
        for (size_t j = 1; j < p+1; j++)
        {
            mapaQTSX[i].insert({j,0});
        }
    }
    

    for (size_t i = 0; i < fatorial-1; i++)
    {
        for (size_t j = 0; j < p; j++)
        {
            int x;
            cin >> x;
            mapaQTSX[j][x]++;
        
        }
    }

    for (size_t i = 0; i < p; i++)
    {
        int chave_com_menor_valor = -1;
        size_t menor_tamanho = 9999999;
        for (auto par : mapaQTSX[i]) {
            int tamanho_atual = par.second;
            if (tamanho_atual < menor_tamanho) {
                menor_tamanho = tamanho_atual;
                chave_com_menor_valor = par.first;
            }
        }
        cout << chave_com_menor_valor << ' ';
    }
    
    return 0;
}
