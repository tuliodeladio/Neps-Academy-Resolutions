#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n[10],menor;
    vector<int> ocorrencias;
    
    for (int i = 0; i < 10;i++)
        cin >> n[i];

    menor = n[0];

    for (auto i : n) {
        if (menor > i)
            menor = i;
        
    }
    


    for (int i = 0; i < 10;i++) {
        if (menor == n[i])
            ocorrencias.push_back(i);
    }

    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias: ";
    for (auto i : ocorrencias) cout << i << ' ';
    cout << endl;

    for (auto i : n) {
        if (menor == i)
            cout << -1 << " ";
        else
            cout << i << " ";
        
    }

}
