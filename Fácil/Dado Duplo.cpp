#include <iostream>

using namespace std;

int main()
{
    int n,d=100,a=100;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;

        if (x > y)
            d-=x;
        else if (x < y)
            a-=y;

    }

    cout << a << endl << d;
    
    
    
    return 0;
}
