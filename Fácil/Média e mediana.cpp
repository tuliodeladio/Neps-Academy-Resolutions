#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;

    if (a > b)
        cout << b-(a-b);
    else
        cout << a-(b-a);
    
    
    return 0;
}
