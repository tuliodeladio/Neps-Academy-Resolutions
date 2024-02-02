#include <iostream>

using namespace std;

int main()
{
    int n,m,count = 0;
    string a,b;
    cin >> n >> a >> m >> b;

    if (n < m)
        n = m;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] != b[i]) {
            cout << count;
            return 0;
        }
        count++;

    }
    
    
    
    cout << count;
    return 0;
}
