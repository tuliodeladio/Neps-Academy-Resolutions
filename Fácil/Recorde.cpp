#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if (a < b)
        cout << "RM";
    else 
        cout << '*';

    cout << endl;
    
    if (a < c)
        cout << "RO";
    else 
        cout << '*';
    
    
    return 0;
}
