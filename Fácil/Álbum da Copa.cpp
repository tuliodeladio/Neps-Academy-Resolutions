#include <iostream>
#include <unordered_set>

using namespace std;


int main()
{
    int n,m;
    unordered_set<int> figurinhas;

    cin >> n >> m;

    for (size_t i = 0; i < m; i++) {
        int a;
        cin >> a;
        figurinhas.insert(a);
    }

    cout << (n - figurinhas.size());

    return 0;

}
