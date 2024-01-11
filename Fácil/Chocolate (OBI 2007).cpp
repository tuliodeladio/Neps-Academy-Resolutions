#include <iostream>

using namespace std;

int main()
{
    int n,soma=0,x;

    for (size_t i = 0; i < n; i++) {
        cin >> x;
        soma+=x;
    }

    cout << soma-n;
    return 0;
}
