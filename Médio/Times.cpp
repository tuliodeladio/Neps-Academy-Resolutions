#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;


int voltar_index_min(vector<int> st) {

    int min = st[0], index = 0;

    for (size_t i = 0; i < st.size(); i++)
    {
        if (st[i] < min) {
            min = st[i];
            index = i;
        }
    }

    return index; 
}



int main() {
    int np, qt;
    cin >> np >> qt;

    vector<int> st(qt, 0);
    vector<pair<int,string>> t[qt];


    map<int, string, greater<int>> p;

    for (int i = 0; i < np; ++i) {
        string n;
        int l;
        cin >> n >> l;
        p[l] = n;
    }

    for (auto& i : p) {
        int ii = voltar_index_min(st);
        t[ii].push_back(i);
        st[ii]+=i.first;
    }

    for (size_t j = 0; j < qt; j++)
    {
        cout << "Time " << j+1 << endl;
        for (auto& i : t[j]) {
            cout << i.second << ' ' << i.first << endl;
        }
        cout << endl << endl << endl;
    }
    
    

    return 0;
}
