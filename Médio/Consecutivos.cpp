#include <iostream>

using namespace std;

int main()
{
    int n,max=1,maxf=1,ant;
    cin >> n >> ant;

    for (size_t i = 0; i < n-1; i++)
    {
        int x;
        cin >> x;
        
        
        if (x == ant) {
            max++;
            
            if (i == n-2 && max > maxf)
                maxf = max;
        }
            
    
        else {
            if (max > maxf)
                maxf = max;
            max = 1;
            ant = x;
        }
    }

    cout << maxf;
    
    return 0;
}