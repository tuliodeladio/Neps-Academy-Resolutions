#include <iostream>

using namespace std;

int main()
{
    int n,vi,menor;
    cin >> n >> vi;
    menor = vi;

    for(size_t i=0;i < n;i++) {
        int a;
        cin >> a;
        vi+=a;
        if (vi < menor)
            menor = vi;
    }

    cout << menor;
}