#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main() {
    
    int n,m;
    cin >> n >> m;

    vector<unordered_map<int,bool>> familias;

    for (size_t i = 0; i < m; i++)
    {
        int a,b;
        cin >> a >>b;

        bool achou = false;

        for (size_t j = 0; j < familias.size(); j++)
        {
            if (familias[j][a] == true) {
                familias[j][b] = true;
                achou = true;
                break;
            }
        }

        if (achou == false) {
            unordered_map<int,bool> x;
            x[a] = true;
            x[b] = true;
            familias.push_back(x);
        }

    }
    
    cout << familias.size();

    return 0;
}
