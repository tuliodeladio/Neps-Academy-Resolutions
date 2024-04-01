#include <iostream>

using namespace std;

int main()
{
    int a,b,c,count=0;
    cin >> a >> b >> c;

    for (size_t i = 0; i < c; i++)
    {
        int x;
        cin >> x;

        if (x >= a and x <= b)
            count++;
    }

    cout << count;
    
    
    
    return 0;
}
