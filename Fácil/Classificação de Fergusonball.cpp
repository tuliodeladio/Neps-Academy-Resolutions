#include <iostream>

using namespace std;

int main()
{
    int n,tm=0;
    cin >> n;
    

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        int a = (x*5)-(3*y);
        if (a > 40)
            tm++;
    }

    if (tm == n)
        cout << tm << '+';
    else
        cout << tm;
    
    return 0;
}
