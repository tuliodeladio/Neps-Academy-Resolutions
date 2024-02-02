#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double e,g;
    cin >> fixed >> setprecision(3) >> e;
    cin >> fixed >> setprecision(3) >> g;

    double relacao = e / g;

    if (relacao <= 0.73)
        cout << "ETANOL";
    else
        cout << "GASOLINA";
    
    
    return 0;
}
