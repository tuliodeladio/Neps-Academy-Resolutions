#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n  >> k;

    
    map<string, int> ultima_msg;
    map<string, int> validas;


    for (size_t i = 0; i < n; i++)
    {
        string cara;
        int t;

        cin >> cara >> t;


        if ( ultima_msg.find(cara) == ultima_msg.end() or (t >= ultima_msg[cara]+k)) {
            validas[cara]++;
            ultima_msg[cara] = t;
        }
    }

    
    vector<pair<string, int>> ordernado(validas.begin(), validas.end());


    sort(ordernado.begin(), ordernado.end(), [](const auto& a, const auto& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });

    for (auto& i : ordernado)
    {
        i.second = (i.second * 25 / 100) + 1;
    }


    cout << "--Rank do Nepscord--" << endl;

    cout << "#1." << ' ' << ordernado[0].first << " - Nivel " << ordernado[0].second << endl;

    cout << "#2.";
    if (ordernado.size() >= 2)
        cout << ' ' << ordernado[1].first << " - Nivel " << ordernado[1].second << endl;

    cout << "#3.";
    if (ordernado.size() >= 3)
        cout << ' ' << ordernado[2].first << " - Nivel " << ordernado[2].second  << endl;
    
    

    return 0;
}