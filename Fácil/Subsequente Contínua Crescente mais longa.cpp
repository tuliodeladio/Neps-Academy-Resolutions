#include <iostream>

using namespace std;

int main()
{
    int n,ant=0,c=0,m=0;
    cin >> n;


    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x >= ant) 
            c++;
        else
            c=1;
            
        if (c > m)
            m = c;
        
        ant = x;

    }

    cout << c;
    
    return 0;
}
