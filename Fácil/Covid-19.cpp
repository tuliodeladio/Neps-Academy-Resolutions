#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if (a <= 50 and b <= 10)
        cout << "White";
    else if (b > 30)
        cout << "Red";
    else
        cout << "Yellow";
    
    
    return 0;
}
