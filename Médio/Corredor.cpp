#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sala[n];

    for(int i = 0; i < n; i++)
        cin >> sala[i];

    long long int max_atual = 0, max_global = -99999;

    for (int i = 0; i < n; i++) {
        max_atual = max((long long int)sala[i], max_atual + sala[i]);
        max_global = max(max_global, max_atual);
    }

    cout << max_global;

    return 0;
}
