#include <iostream>

using namespace std;

int main()
{
    int a,b,c,dia = 0;
    cin >> a >> b >> c;

    while (c > 0)
    {
        dia ++;
        c-=a;
        
        if (dia%7 == 0)
            c-=b;
    }
    
    cout << dia;
    return 0;
}
