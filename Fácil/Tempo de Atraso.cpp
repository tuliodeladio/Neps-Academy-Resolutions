#include <iomanip>
#include<iostream>

using namespace std;

int main()
{   
    int h1,m1,h2,m2;

    cin >> h1 >> m1 >> h2 >> m2;

    int ms1 = (h1 * 60) + m1 + 45, ms2 = (h2 * 60) + m2;
    int atraso = ms1-ms2;

    if (ms1 > ms2)
        cout << "Atrasado " << atraso;
    else
        cout << "Sucesso";
    
    return 0;
}
