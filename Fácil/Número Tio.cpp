#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int a,r=1;
    cin >> a;
    
    if (a == 1) {
        cout << "Normal";
        return 0;
    }

    for (unsigned int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            r++;
    }

    if (r == 1)
        cout << "Tio";
    else
        cout << "Normal";
        
    return 0;
    
    
}
