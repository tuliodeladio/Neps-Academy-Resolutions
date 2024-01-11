#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n, y;
    cin >> n;

    unordered_map<int, int> x;

    for (int i = 0; i < n; i++) {
        cin >> y;
        x[y]++;
    }

    unsigned int k = 0;
    unsigned int maior = 0;

    for (auto& pair : x) {
        if (pair.second > maior || (pair.second == maior && pair.first > k)) {
            maior = pair.second;
            k = pair.first;
        }
    }

    cout << k;

    return 0;
}