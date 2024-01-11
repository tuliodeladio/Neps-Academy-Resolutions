#include <iostream>

using namespace std;

int main()
{
    int n,s=0,x;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 1)
            s++;
        
    }
    
    
    cout << s;
    return 0;
}
