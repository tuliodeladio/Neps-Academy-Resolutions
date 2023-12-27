#include <iostream>
#include <string.h>
using namespace std;

int main()
{   
    
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;

    int a1 = a*b, a2 = c*d;

    if (a1 > a2)
        cout << a1;
    else
        cout << a2;

    return 0;
}