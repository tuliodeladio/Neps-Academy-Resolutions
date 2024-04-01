#include <iostream>

using namespace std;

int main()
{
    int count = 0,n;
    char a[4] = {'N','L','S','O'};

    cin >> n;

    string k;
    cin >> k;

    for (char x : k)
    {

        if (x == 'D') {
            if (count == 3)
                count = 0;
            else
                count++;
        }
        else {
            if (count == 0)
                count = 3;
            else
                count--;
        }
    }

    cout << a[count];
    
    
    
    return 0;
}
