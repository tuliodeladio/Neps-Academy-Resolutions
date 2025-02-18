#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <map>


using namespace std;

int main()
{   

    map<int,bool> excluidos;
    int n,m;

    cin >> n;
    int fila[n];

    for (int& i : fila)
        cin >> i;


    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        int excluido;
        cin >> excluido;
        excluidos.insert({excluido,true});
    }
    

    for (int i : fila) {
        if (!excluidos[i])
            cout << i << ' ';
    }





    return 0;
}