#include <iostream>

using namespace std;

int main()
{
    char m[3] = {'D','D','D'};
    int a,b,x;
    cin >> a >> b;

    int count = 0;

    for (size_t i = 0; i < a; i++)
    {
        
        if (count == 1)
            count = 2;
        else if (count == 2)
            count = 0;
        else
            count = 1;
    }

    m[count] = 'A';

    count = 0;

    for (size_t i = 0; i < b; i++)
    {
        
        if (count == 1)
            count = 2;
        else if (count == 2)
            count = 0;
        else
            count = 1;
    }

    if (m[count] != 'D')
    {
        if (count == 1)
            count = 2;
        else if (count == 2)
            count = 0;
        else
            count = 1;
    }
    
    m[count] = 'B';

    for (size_t i = 0; i < 3; i++)
    {
        if (m[i] == 'D')
            cout << i;
    }
    

    return 0;
}
