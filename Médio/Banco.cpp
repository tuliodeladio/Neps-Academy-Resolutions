#include <iostream>

#include <queue>

using namespace std;


int main() {
    int caixas,clientes;
    cin >> caixas >> clientes;

    queue<pair<int,int>> fila;

    for (size_t i = 0; i < clientes; i++)
    {
        pair<int,int> x;
        cin >> x.first >> x.second;
        fila.push(x);
    }

    int tempo = 0;

    vector<pair<int,int>>processando;

    for (size_t i = 0; i < caixas; i++)
    {
        pair<int,int> x = {0,0};
        processando.push_back(x);
    }
    
    int cl20 = 0;

    while (fila.empty() == false)
    {

        for (size_t i = 0; i < caixas; i++)
        {
            if (processando[i].second == 0) {

                if (fila.empty() == false) {
                    processando[i] = fila.front();
                    fila.pop();
                }
                else
                    processando[i].first = 9999990;

                if (tempo - processando[i].first > 20 )
                    cl20++;
            }
            processando[i].second--;
        }

        tempo++;
    }
    
    cout << cl20;

    return 0;
}
