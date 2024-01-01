#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n, menor = numeric_limits<int>::max();
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < menor)
            menor = x;
    }

    cout << menor;
    return 0;
}
