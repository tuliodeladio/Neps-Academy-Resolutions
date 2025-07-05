#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    
    int n;
    cin >> n;

    map<string,int> mapa;

    int caiu = 0;
    for (size_t i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        string first = to_string(x);
        first+=',';
        first += to_string(y);

        mapa[first]++;

        if (mapa[first]>1)
            caiu = 1;
    }

    cout << caiu;
    
    
    
}
