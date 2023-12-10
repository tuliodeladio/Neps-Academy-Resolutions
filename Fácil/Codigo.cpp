#include <iostream>

using namespace std;

int main()
{
    int n, b = 0;
    cin >> n;
    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < n-2; i++)
    {
        if (c[i] == 1)
        {
            if (c[i+1] == 0 && c[i+2] == 0) {
                b++;
            }
        }
        
    }
    cout << b;
    

}
