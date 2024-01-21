#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int r = (a+b-1)%12 + 1;
    cout << r;
    
    
    return 0;
}
