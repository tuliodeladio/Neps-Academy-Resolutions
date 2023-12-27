#include <iostream>

using namespace std;

int main()
{
    int n, menor,maior, nu;
    cin >> n;

    cin >> nu;
    menor = nu;
    maior = nu;

    for (size_t i = 0; i < n-1; i++) {
        cin >> nu;
        if (nu > maior)
            maior = nu;
        if (nu < menor)
            menor = nu;
    }

    cout << maior << endl << menor;
    
}
