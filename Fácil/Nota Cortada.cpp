#include <iostream>

using namespace std;

int main()
{
    int b,t;
    cin >> b >> t;

    double esquerdoQ,direitoQ,triangulo;
    int area_original = 160*70;
    
    if (t > b)
    {
        esquerdoQ = b*70;
        direitoQ = (160-t)*70;
        triangulo = ((t-b)*70)/2;
    }
    else {
        esquerdoQ = t*70;
        direitoQ = (160-b)*70;
        triangulo = ((b-t)*70)/2;
    }

    if ((esquerdoQ+triangulo) == (area_original/2))
        cout << 0;

    else if (esquerdoQ > direitoQ)
        cout << 1;
    else
        cout << 2;
    
    
    return 0;
    
}