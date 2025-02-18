    #include <iostream>
    #include <cmath>
    #include <iomanip>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        int n,m;
        cin >> n >> m;
        vector<int> caixas[n];

        for (int i = 1; i < n+1; i++)
        {
            caixas[i-1].push_back(i);
        }

        for (size_t i = 0; i < m; i++)
        {
            int retirada,destino;
            cin >> retirada >> destino;

            for (size_t j = 0; j < n; j++)
            {
                auto x = find(caixas[j].begin(), caixas[j].end(), retirada);
                if (x != caixas[j].end()) {
                    caixas[j].erase(x);
                    break;
                }
            }
            caixas[destino-1].push_back(retirada);
        }
        
        for (size_t i = 1; i < n+1; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                auto x = find(caixas[j].begin(), caixas[j].end(), i);
                if (x != caixas[j].end()) {
                    cout << j+1 << endl;
                    break;
                }
            }
        }
        
        
  

        return 0;
    }
