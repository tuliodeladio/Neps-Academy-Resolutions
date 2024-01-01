#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n,a;
    cin >> n;

    unordered_set<int> g;

    for (size_t i = 0; i < n; i++) {
        cin >> a;
        g.insert(a);
    }
    
    cout << g.size();

    return 0;

}
