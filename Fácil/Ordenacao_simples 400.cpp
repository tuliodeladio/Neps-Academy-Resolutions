#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> nu;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        nu.push_back(a);
    }

    sort(nu.begin(),nu.end());

    for (auto i : nu)
        cout << i << ' ';
    
    sort(nu.begin(),nu.end(), greater<int>());

    cout << endl;
    for (auto i : nu)
        cout << i << ' ';

    return 0;
}
