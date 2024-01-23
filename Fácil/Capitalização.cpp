#include <iostream>

using namespace std;

int main()
{
    int n;
    string a;
    cin >> n >> a;

    for (size_t i = 0; i < n-2; i++)
    {
        if (a[i] == 'j' and a[i+1] == 'o' and a[i+2] == 'i') {
            a[i] = 'J';
            a[i+1] = 'O';
            a[i+2] = 'I';
            i+=2;
        }
    }

    cout << a;
    
    return 0;
}
