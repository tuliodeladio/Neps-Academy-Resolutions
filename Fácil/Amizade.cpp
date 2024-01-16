#include <iostream>

using namespace std;

int main()
{
    int n,a,d,count=0;
    cin >> n >> a >> d;
    
    for (size_t i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if ((a+d) >= k and (a-d) <= k)
            count++;
        
    }
    cout << count;

    
    
    return 0;
}
