#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int numeros[n][n];
    int numeros1[n][n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            numeros[i][j] = x;
            numeros1[j][i] = x;
        }
    }


    int soma1, soma2;

    for (size_t i = 0; i < n; i++)
    {
        soma1 = 0;
        soma2 = 0;
        for (size_t j = 0; j < n; j++)
        {
            soma1 += numeros[i][j];
            soma2 += numeros[j][i] ;
        }

        if (soma1 != soma2) {
            cout << -1;
            return 0;
        }
    }

    int soma_principal = 0, soma_secundaria = 0;

    for (size_t i = 0; i < n; i++) {
        soma_principal += numeros[i][i];
        soma_secundaria += numeros[i][n-i-1];
    }

    if (soma_principal != soma_secundaria or soma_principal != soma1) {
        cout << -1;
        return 0;
    }

    cout << soma1;
    

}
