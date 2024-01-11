#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,a=0,b=0;
    cin >> n;

    int emprestou[n];
    int pegou[n];
    
    for (auto& i : emprestou)
        cin >> i;

    for (auto& i : pegou)
        cin >> i;
    for (size_t i = 0; i < n; i++)
    {
        int x = emprestou[i]-pegou[i];
        if (x > 0)
            a+=x;
        else
            b+=(x*-1);
    }
    

    cout << a << ' ' << b;

    return 0;
}
