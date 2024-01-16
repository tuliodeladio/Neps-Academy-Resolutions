#include <iostream>


using namespace std;

int main()
{
    long long int x,y,m,resultado = 0;
    cin >> x >> y >> m;

    
    while (y > 0) {

        if (y % 2 == 1)
            resultado = (resultado+x) % m;
        
        x = (x*2)%m;
        y = y/2;

    }
    
    cout << resultado;
    return 0;
}
