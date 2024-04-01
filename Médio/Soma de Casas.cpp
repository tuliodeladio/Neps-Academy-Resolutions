#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n, s;
    cin >> n;

    long long int numeros[n];

    for (long long int i = 0; i < n; i++)
        cin >> numeros[i];

    cin >> s;

    long long int left = 0;
    long long int right = n - 1;

    while (left < right) {
        long long int soma = numeros[left] + numeros[right];

        if (soma == s) {
            cout << numeros[left] << ' ' << numeros[right];
            return 0;
        }

        else if (soma < s)
            left++;
    
        else
            right--;
    }

    return 0;
}
