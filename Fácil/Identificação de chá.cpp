#include <iostream>

using namespace std;

int main()
{
    int n,x,s=0;
    cin >> n;

    while (cin >> x)
        if (x == n)
            s++;
    

    cout << s;
    
    return 0;
}
