#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;


int main() {
    int n;
    cin >> n;

    int somalinhas[n];
    int somacolunas[n];

    for (size_t i = 0; i < n; i++)
    {
        somalinhas[i] = 0;
        somacolunas[i] = 0;
    }
    

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            somalinhas[i] += x;
            somacolunas[j] += x;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (somacolunas[i] != somalinhas[j]) {
                cout << 0;
                return 0;
            }
            
        }
    }
    cout << somacolunas[0];
    

    return 0;
}
