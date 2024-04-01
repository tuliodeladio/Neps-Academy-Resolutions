#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numeros(n);
    vector<int> distancias(n);

    for (int i = 0; i < n; i++)
        cin >> numeros[i];
    

    int proximo_zero = INT_MAX;
    
    for (int i = n - 1; i >= 0; --i) {
        if (numeros[i] == 0)
            proximo_zero = i;
        
        distancias[i] = proximo_zero - i;
        
    }


    for (int i = 0; i < n; ++i) {
        if (numeros[i] == 0)
            proximo_zero = i;
        
        
        distancias[i] = abs(min(distancias[i], i - proximo_zero));
    }

    for (int d : distancias) {
        if (d >= 9)
            cout << 9 << ' ';
        else
            cout << d << ' ';
    }
    

    return 0;
}
