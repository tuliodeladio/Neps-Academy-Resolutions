#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,b;
    cin >> n;
    vector<int> a;
    
    for (size_t i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    a.push_back(0);

    sort(a.begin(),a.end());

    for (size_t i = n+1; i != 0; i--) {
        if (a[i]-a[i-1] > 8)
        {
            cout << 'N';
            return 0;
        }
        
    }
    
    cout << 'S';

    return 0;

}