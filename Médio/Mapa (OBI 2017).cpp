#include <iostream>
#include <set>

using namespace std;



int main() {
    int l,c;
    cin >> l >> c;
    
    char mapa[l][c];

    pair<int,int> o;

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> mapa[i][j];

            if (mapa[i][j] == 'o') {
                o.first = i;
                o.second = j;
            }
        }
    }

    while (1 == 1)
    {
        if (o.first+1 < l and mapa[o.first+1][o.second] == 'H'  ) {
            mapa[o.first][o.second] = 'x';
            o.first++;
        }
        else if (o.first-1 >= 0 and mapa[o.first-1][o.second] == 'H'  ) {
            mapa[o.first][o.second] = 'x';
            o.first--;
        }

        else if (o.second+1 < c and mapa[o.first][o.second+1] == 'H'  ) {
            mapa[o.first][o.second] = 'x';
            o.second++;
        }

        else if (o.second-1 >= 0 and mapa[o.first][o.second-1] == 'H'  ) {
            mapa[o.first][o.second] = 'x';
            o.second--;
        }

        else {
            cout << o.first+1 << ' ' << o.second+1;
            return 0;
        }
    }
    

    return 0;
}
