#include <iostream>

using namespace std;

int main()
{
    int N,E[3], count = 3;
    cin >> N;
    for (int i = 0; i < 3;i++)
        cin >> E[i];

    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 3;j++) {
            if (E[i] < E[j]) {
                int aux = E[i];
                E[i] = E[j];
                E[j] = aux;
            }
        }
    }

    for (int i = 0; i < 3;i++) {
        N = N - E[i];
        if (N < 0)
            count--;
    }

    cout << endl << count;

    return 0;
}
