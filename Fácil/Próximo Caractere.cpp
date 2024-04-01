#include <iostream>

using namespace std;

int main()
{
    int n;
    string a;
    cin >> n >> a;

    for (size_t i = 0; i < n-1; i++)
    {
        if (a[i+1] == 'J')
            cout << a[i] << endl;
    }
    
    
    
    return 0;
}
