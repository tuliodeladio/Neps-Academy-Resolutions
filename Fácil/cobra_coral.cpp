#include <iostream>

using namespace std;

int main()
{
    int a[4];
    
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    
    if (a[0] == a[3])
        cout << 'F';
    else
        cout << 'V';
        
    return 0;
}
