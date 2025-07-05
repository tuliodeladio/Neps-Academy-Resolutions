#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    
    int n,m;
    cin >> n >> m;
    long long int competidorsum[n];



    for (size_t i = 0; i < n; i++)
    {
        long long int desse = 0;

        for (size_t j = 0; j < m; j++)
        {
            long long int x;
            cin >> x;
            desse += x;
        }

        competidorsum[i] = desse;

    }

    long long int min = 99999999999999999999999999999999999999;
    int index = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (competidorsum[i] < min)
        {
            min = competidorsum[i];
            index = i;
        }
    }

    cout << index + 1 << endl;
    
}
