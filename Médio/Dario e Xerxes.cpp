#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;


int main() {
    int n;
    cin >> n;

    int contador_dario = 0;
    int contador_xerxes = 0;

    vector<vector<int>> matriz = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 0},
        {0, 1}
    };
    

    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;

        if(find(matriz[x].begin(),matriz[x].end(),y) != matriz[x].end())
            contador_dario++;
        else
            contador_xerxes++;
    }


    if (contador_dario > contador_xerxes)
        cout << "dario";
    else
        cout << "xerxes";
    
    return 0;
}
