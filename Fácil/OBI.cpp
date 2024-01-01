#include <iostream>

using namespace std;

int main()
{   
    int n,p,count = 0;

    cin >> n >> p;
    

    for (size_t i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        if ((a+b) >= p)
            count++;
    }

    cout << count;
    
    
    return 0;
}