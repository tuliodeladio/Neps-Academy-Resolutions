#include <iostream>

using namespace std;

int main()
{   
    int a1,a2,b1,b2;

    cin >> a1 >> a2 >> b1 >> b2;

    if ((a1*a2) > (b1*b2))
       cout << "Primeiro";
    else if ((a1*a2) == (b1*b2))
        cout << "Empate";
    else
        cout << "Segundo";
    
    return 0;
}