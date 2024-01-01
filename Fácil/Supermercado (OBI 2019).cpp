#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double p,q,menor = 101;

    for (size_t i = 0; i < n; i++) {
        cin >> p >> q;
        double x = p/q;
        if (menor > x)
            menor = x;
    }
    
    cout << fixed << setprecision(2) << menor * 1000;

}
