#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,r;
    cin >> n;

    for (size_t i = 2; i < n+1; i++)
    {
        r = 1;
        for (unsigned int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                r++;
        }

        if (r == 1)
            cout << i << endl;
        
        
    }
    
    return 0;
}
