#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int a,b,m;
    char c;


    cin >> m >> a >> c >> b;
    
    if (c == '*')
        a = a * b;
    else
        a = a + b;

    if (a > m)
        cout << "OVERFLOW";
    else
        cout << "OK";
    
    
    return 0;
}
