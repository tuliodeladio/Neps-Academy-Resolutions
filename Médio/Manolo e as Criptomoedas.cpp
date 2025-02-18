#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double dia1,diaN;

    cin >> dia1;

    for (size_t i = 0; i < n-2; i++)
    {
        double x;
        cin >> x;
    }
    

    cin >> diaN;

    double resultado = (diaN-dia1)*100;


    cout << fixed << setprecision(2) << resultado;

    return 0;
}
