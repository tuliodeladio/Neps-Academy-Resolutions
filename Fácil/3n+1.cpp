#include <iostream>

using namespace std;

int main()
{
    int n,c=1;
    cin >> n;

    while (n != 1)
    {
        if (n % 2 == 0)
            n/=2;
        else
            n=(n*3)+1;
        c++;
    }

    cout << c;
    
    
    return 0;
}
