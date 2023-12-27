#include <iostream>

using namespace std;

int main()
{
    int a[3] = {2,3,4},n, b[3] = {0,0,0};

    cin >> n;

    int numeros[n];

    for (size_t i = 0; i < n; i++)
        cin >> numeros[i];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 3; j++) {
            if ((numeros[i] % a[j]) == 0)
                b[j]++;
        }
    }

    for (size_t i = 0; i < 3; i++)
        cout << b[i] << endl;
    
    
}
