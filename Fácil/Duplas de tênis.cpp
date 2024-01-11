#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n[4],a[3];

    
    for (auto& i : n)
        cin >> i;

    a[0] = abs((n[0] + n[1]) - (n[2] + n[3]));
    a[1] = abs((n[0] + n[2]) - (n[1] + n[3]));
    a[2] = abs((n[0] + n[3]) - (n[1] + n[2]));

    sort(a,a+3);

    cout << a[0];
    


    return 0;
}
