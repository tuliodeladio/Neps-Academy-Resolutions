#include <iostream>

using namespace std;

int main()
{
    int a,n,c=0;
    cin >> a >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x = a*x;

        if (x >= 40000000)
            c++;
    }

    cout << c;
    
    return 0;
}
