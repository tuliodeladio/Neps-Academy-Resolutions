#include <iostream>
#include <iomanip>
#include <cstring> // Para strlen()
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int linhas[n];
    int colunas[m];


    for (size_t i = 0; i < n; i++)
    {
        linhas[i] = 0;
    }

    for (size_t i = 0; i < m; i++)
    {
        colunas[i] = 0;
    }


    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            colunas[j]+=x;
            linhas[i]+=x;
        }
        
    }

    int max = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (linhas[i] > max)
            max = linhas[i];
    }

    for (size_t i = 0; i < m; i++)
    {
        if (colunas[i] > max)
            max = colunas[i];
    }
    
    cout << max;
    
    return 0;
}
