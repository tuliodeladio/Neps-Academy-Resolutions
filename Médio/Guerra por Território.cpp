#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;


int main() {
    int n;
    cin >> n;

    int secoes[n];
    int soma = 0;

    for (size_t i = 0; i < n; i++)
    {
        cin >> secoes[i];
        soma += secoes[i];
    }

    soma /=2;

    int somatorioV = 0;
    for (size_t i = 0; i < n; i++)
    {
        somatorioV+= secoes[i];
        if (somatorioV == soma)
            cout << i+1;
    }

    
    return 0;
}
