#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int p,n,x;
    cin >> p >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if ((p + x) >= 100)
            p = 100;
        else if ((p + x) <= 0)
            p = 0;
        else
            p+=x;
    }

    cout << p;
    
}
