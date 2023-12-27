#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    
    string op;
    vector<unordered_map<int,int>> testes;

    while (op != "0 0")
    {
        int a,v;
        

        cin >> a >> v;

        if (a == 0 && v == 0) {
            op = "0 0";
            break;
        }
        

        unordered_map<int,int> aeroporto_count;

        for (size_t i = 0; i < v; i++)
        {
            int p,c;
            cin >> p >> c;
            aeroporto_count[p]++;
            aeroporto_count[c]++;
        }

        testes.push_back(aeroporto_count);
        
    }

    int testeI = 1;
    for (const auto& teste : testes) 
    {
        vector<int>maiores;
        int maior = 0;

        for (const auto& pair : teste)
        {
            if (pair.second > maior)
               maior = pair.second;   
        }
        
        cout << "Teste " << testeI << endl;
        
        for (const auto& pair : teste) 
        {
            if (pair.second == maior)
                maiores.push_back(pair.first);
               
        }

        sort(maiores.begin(), maiores.end());

        for (const auto& alto : maiores) 
            cout << alto << " ";

        testeI++;
        cout << endl;
    }
    
    return 0;
}
