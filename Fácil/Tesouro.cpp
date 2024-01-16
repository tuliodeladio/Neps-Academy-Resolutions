#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin >> n >> x >> y;

    for (size_t i = 0; i < n; i++)
    {
        char dd;
        cin >> dd;

        if (dd == 'C')
            x -= 1;
        else if (dd == 'B')
            x += 1;
        else if (dd == 'D')
            y += 1;
        else
            y -= 1;
    }
    
    cout << x << ' ' << y;
    return 0;
}

