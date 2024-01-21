#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> a;
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    cout << a.size();
    
    
    
    return 0;
}
