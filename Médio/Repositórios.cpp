#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> instalados;
    unordered_map<string, int> repo;



    for (int i = 0; i < n; ++i) {
        string p;
        int v;
        cin >> p >> v;
        instalados[p] = v;
    }


    for (int i = 0; i < m; ++i) {
        string p;
        int v;
        cin >> p >> v;

        if (instalados[p] < v)
            cout << p << ' ' << v << endl;

    }


    return 0;
}
