#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n,m,s=0;
    cin >> n >> m;

    unordered_set<int> chaves;
    int k[n];

    for (int& i : k)
        cin >> i;

    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        chaves.insert(x);
    }

    for (int& i : k) {
        for (int j : chaves) {
            if (j == i){
                s++;
                break;
            }
        }
    }

    cout << s;
    
    return 0;
}
