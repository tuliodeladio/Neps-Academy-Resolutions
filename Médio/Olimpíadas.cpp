#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n,m;
    cin >> n >> m;

    unordered_map<int,int> o,p,b;

    for (size_t i = 0; i < m; i++)
    {
        int x,y,z;
        cin >> x >> y;

        o[x]+=x;
        p[x]+=y;
        b[x]+=z;
    }

    int maior = 0;
    for (auto i : o) {
        if (i.second > maior)
            maior = i.second;
    }

    vector<int> x;

    for (auto i : o) {
        if (i.second == maior)
            x.push_back(i.first);
    }

    if (x.size() == 1) {
        cout << x[0];
        return 0;
    }

    maior = 0;

    for (int i : x) {
        if (p[i] > maior)
            maior = p[i];
    }


    vector<int> xx;

    for (int i : x) {
        if (p[i] == maior)
            xx.push_back(i);
    }

    if (xx.size() == 1) {
        cout << xx[0];
        return 0;
    }




    maior = 0;

    for (int i : xx) {
        if (b[i] > maior)
            maior = p[i];
    }


    vector<int> xxx;

    for (int i : xx) {
        if (b[i] == maior)
            xxx.push_back(i);
    }

    if (xxx.size() == 1) {
        cout << xxx[0];
        return 0;
    }

    sort(xxx.begin(),xxx.end());
    cout << xxx[xxx.size()-1];


    return 0;
}
