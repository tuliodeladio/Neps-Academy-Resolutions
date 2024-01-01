#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unordered_map<int,int> lanca;
    int n,a,maior = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        lanca[a]++;
    }

    for (auto i : lanca) {
        if (i.second > maior)
            maior = i.second;
    }

    vector<int> maiores;

    for (auto i : lanca) {
        if (i.second == maior)
            maiores.push_back(i.first);
    }

    sort(maiores.begin(), maiores.end());

    for (auto i : maiores)
        cout << i << ' ';

    
    return 0;
}
