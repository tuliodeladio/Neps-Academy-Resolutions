#include <iostream>

using namespace std;

int main() {
    int P, N, R, count = 0;
    cin >> P >> N >> R;

    int total_inf = N;

    while (total_inf <= P) 
    {
        int novos_infectados = N*R;
        total_inf += novos_infectados;
        N = novos_infectados;
        count++;
    }

    cout << count;

    return 0;
}
