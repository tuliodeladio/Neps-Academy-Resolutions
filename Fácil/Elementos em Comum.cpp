#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    unordered_set<int> x(n),y(m);

    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        x.insert(l);
    }

    for (int i = 0; i < m; ++i) {
        int l;
        cin >> l;
        y.insert(l);
    }

    vector<int>a(x.begin(),x.end());
    vector<int>b(y.begin(),y.end());

    sort(a.begin(),a.end());

    int c = 0;

    for(int i : a) {
        if (find(b.begin(),b.end(),i) != b.end()) {
            cout << i << endl;
            c++;
        }
    }

    if (c == 0)
        cout << '*';
    
    
    
    return 0;
}
