#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n,m,a;
    cin >> n >> m;

    unordered_set<int> c1, c2;

    for (size_t i = 0; i < n; i++) {
        cin >> a;
        c1.insert(a);
    }
    for (size_t i = 0; i < m; i++) {
        cin >> a;
        c2.insert(a);
    }

    n = c1.size(), m = c2.size();


    for (auto i : c2)
    {
        auto find = c1.find(i);
        if (find != c1.end()) {
           n--;
           m--;
        }
            
    }

    if (n < m)
        cout << n;
    else
        cout << m;

    return 0;

}
