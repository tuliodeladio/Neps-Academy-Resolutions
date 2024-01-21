#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    unordered_map<int, int> a;
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    int mo = INT_MAX;
    int mn = INT_MAX;

    for (auto& i : a) {
        int nu = i.first;
        int o = i.second;

        if (o < mo or (o == mo and nu < mn)) {
            mo = o;
            mn = nu;
        }
    }

    vector<int> k;

    for (auto& i : a) {
        if (i.second == mo)
            k.push_back(i.first);
    }

    sort(k.begin(), k.end());


    cout << k[0] << endl;



    return 0;

}
