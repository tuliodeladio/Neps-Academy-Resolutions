#include <iostream>

using namespace std;

int main()
{
    int count, l,c, q = 0;
    cin >> count;
    
    for (int i = 0; i < count; i++)
    {
        cin >> l >> c;
        if (l > c)
        {
           q += c;
        }
        
    }

    cout << q << endl;
    
    return 0;
}
