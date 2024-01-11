#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n-1,0);

    for (size_t i = 0; i < n-1; i++)
        cin >> a[i];
    
    sort(a.begin(),a.end());

    for (int i = 1; i < n; i++)
    {
        if (a[i-1] != i) {
            cout << i;
            return 0;
        }
    }
    cout << n;
    
    
    return 0;
}
