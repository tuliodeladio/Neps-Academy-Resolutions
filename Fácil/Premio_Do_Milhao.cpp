#include <iostream>

using namespace std;

int main()
{
    int a, soma = 0, lido, parado = 0;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> lido;
        soma += lido;

        if (soma >= 1000000 && parado == 0)
        {
            parado = i+1;
        }
    }

    cout << parado << endl;

    return 0;
}