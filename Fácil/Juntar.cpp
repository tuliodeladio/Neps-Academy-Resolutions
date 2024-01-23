#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int a[n+m];

    for (int& i : a)
        cin >> i;

    sort(a,a+(n+m));

    for (int i : a)
        cout << i << endl;
    
    
    return 0;
}
