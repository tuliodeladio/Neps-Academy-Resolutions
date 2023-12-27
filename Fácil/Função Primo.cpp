#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,r=0;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            r++;
    }

    if (r == 2)
        cout << "S";
    else
        cout << "N";
        

        
    return 0;
    
    
}
