#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int n1 = n-9;

    if (n1 <= 0)
        cout << n1 + 24;
    else
        cout << n1;
    
    return 0;
}
