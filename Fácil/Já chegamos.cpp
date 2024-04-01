#include <iostream>

using namespace std;

int main()
{
    int n[4];
    int d[5][5];

    for (size_t i = 0; i < 4; i++)
        cin >> n[i];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            int soma = 0;
            for (size_t x = min(i, j); x < max(i, j); x++)
                soma+=n[x];

            d[i][j] = soma;
        }
    }

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
            cout << d[i][j] << ' ';

        cout << endl;
    }

    return 0;
}
