#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 2; i <= n; i++)
    {
        int r = 1;
        for (unsigned int j = 2; j <= sqrt(i); j++)
        {
            if (n % 2 == 0 || n % 3 == 0) 
                break;
            else if (i % j == 0) {
                r++;
                if (r > 1)
                    break;
            }
        }

        if (r == 1)
            cout << i << ' ';
        
        
    }
    
    return 0;
}
