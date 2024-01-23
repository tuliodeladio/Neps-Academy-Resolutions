#include <iostream>

using namespace std;

int main()
{
    int a[5];

    for (int& i : a)
        cin >> i;

    for (size_t i = 0; i < 5; i++)
    {
        int x;
        cin >> x;

        if (x == a[i]) {
            cout  << 'N';
            return 0;
        }
    }

    cout  << 'Y';
    


    
    
    return 0;
}
