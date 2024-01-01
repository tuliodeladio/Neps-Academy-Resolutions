#include <iostream>

using namespace std;

int main()
{
    int a[3][3], menor, maior;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    maior = a[0][0];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++) {
            if (a[i][j] > maior)
                maior = a[i][j];
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            if (a[i][j] == maior)
                cout << -1 << " ";
            else
                cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
    
}
