#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main() {
    int n,m;
    cin >> n >> m;

    int mapa[n][m];

    pair<int,int> comeco;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            mapa[i][j] = x;

            if (x == 3)
                comeco = {i,j};
        }
        
    }

    int i = comeco.first,j = comeco.second;
    pair<int,int> ant = comeco;
    int count = 1;

    while (mapa[i][j] != 2)
    {
        mapa[i][j] = 3;

        if ((i + 1 < n) and (mapa[i+1][j] == 1 or mapa[i+1][j] == 2))
            i++;
    
        else if ((j + 1 < m) and (mapa[i][j+1] == 1 or mapa[i][j+1] == 2))
            j++;


        else if ((i - 1 >= 0) and (mapa[i-1][j] == 1 or mapa[i-1][j] == 2))
            i--;

        else if ((j - 1 >= 0) and (mapa[i][j-1] == 1 or mapa[i][j-1] == 2))
            j--;

        
        count++;
    }
    
    
    cout << count;

    return 0;
}
