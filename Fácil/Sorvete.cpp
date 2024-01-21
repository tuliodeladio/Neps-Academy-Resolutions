#include <iostream>

using namespace std;

int main()
{
    int s,a,b,v=250,al=0;
    cin >> s >> a >> b;

    al = a;

    while (al < s)
    {
        al+=b;
        v+=100;
    }

    cout << v;
    
    
    
    return 0;
}
