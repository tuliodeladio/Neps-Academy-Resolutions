#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> vetor(n);

    for (long long int i = 0; i < n; i++)
        cin >> vetor[i];

    sort(vetor.begin(),vetor.end());

    long long int maior_produto = (long long int)vetor[n - 1] * vetor[n - 2] * vetor[n - 3];

    cout << maior_produto;

    return 0;
}
