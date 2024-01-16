#include <iostream>

using namespace std;

int main()
{
    int n,e,d,min=99999999;
    cin >> n >> e >> d;

    for (size_t i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        int x = abs(a-e)+abs(b-d);
        if (x < min)
            min = x;
    }

    cout << min;
    
    return 0;
}
