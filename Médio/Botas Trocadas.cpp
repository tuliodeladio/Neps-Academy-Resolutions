#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;

    unordered_map<int,int> d;
    unordered_map<int,int> e;

    for (size_t i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;

        if (b == 'D')
            d[a]++;
        else
            e[a]++;

    }
    
    int x = 0;

    for(auto i : d) {
        x += min(i.second, e[i.first]);
    }

    cout << x;

    return 0;
}
