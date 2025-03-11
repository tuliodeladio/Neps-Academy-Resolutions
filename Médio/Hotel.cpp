#include <iostream>
#include <vector>

using namespace std;


int find(vector<int>& parent, int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find(parent, parent[x]);
}

int main() {
    int n, r;
    cin >> n >> r;

    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    int contador = 0;

    for (int i = 0; i < r; i++) {
        int limite;
        cin >> limite;

        int prox_andar = find(parent, limite);

        if (prox_andar == 0) {
            break;
        }


        contador++;
        parent[prox_andar] = prox_andar - 1;
    }

    cout << contador << endl;

    return 0;
}
