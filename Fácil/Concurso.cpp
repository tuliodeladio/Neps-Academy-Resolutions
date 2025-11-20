#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int notas[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> notas[i];
    }

    sort(notas, notas+n);

    cout << notas[n-a];
    

    return 0;
}
