#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    map<int,int> circulos;
    vector<long long> d2s;
    
    for (int i = 0; i < n; i++)
    {
        long long raio;
        cin >> raio;
        circulos.insert({raio * raio, n - i});
    }
    
    long long pontos = 0;
    
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        long long d2 = (long long)x * x + (long long)y * y;
        d2s.push_back(d2);
    }
    

    for (int i = 0; i < m; i++)
    {
        long long d2 = d2s[i];
        auto it = circulos.lower_bound(d2);
        if (it != circulos.end()) {
            pontos += it->second;
        }
    }
    
    cout << pontos;
    
    return 0;
}
