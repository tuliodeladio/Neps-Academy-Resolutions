#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x,y;

    cin >> y;

    for (size_t i = 0; i < n-1; i++)
    {
        cin >> x;
        if (x > y)
        {
            cout << 'N';
            return 0;
        }
        
    }

    cout << 'S';

    return 0;
}
