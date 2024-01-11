#include <iostream>

using namespace std;

int main()
{
    int e1,e2,e3,x;

    cin >> e1 >> e2 >> e3 >> x;

    if ((e1-e2) <= x)
        cout << e2;
    else
        cout << e3;
    
    return 0;
}
