#include <iostream>

using namespace std;

int main()
{
    int x,count = 0;

    for (size_t i = 0; i < 3; i++)
    {
        cin >> x;
        
        if (x == 1)
            count++;
        
    }

    if (count > 1)
        cout << 1;
    else
        cout << 2;
    
    
    return 0;
}
