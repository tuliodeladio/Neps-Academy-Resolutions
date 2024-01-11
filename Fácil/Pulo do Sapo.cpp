#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> pedras(n, 0);

    for (int i = 0; i < m; i++)
    {
        int p, d;
        cin >> p >> d;
        
        pedras[p - 1] = 1;

        for (int j = p - d; j > 0; j -= d)
            pedras[j - 1] = 1;
        

        for (int j = p + d; j <= n; j += d)
            pedras[j - 1] = 1;
        
    }

    for (int i : pedras)
        cout << i << endl;

    return 0;
}
