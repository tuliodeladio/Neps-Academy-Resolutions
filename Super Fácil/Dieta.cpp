#include <iostream>

using namespace std;

int main()
{
    int n,m,sum = 0;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        int p,g,c;
        cin >> p >> g >> c;
        sum += (p*4) + (g*9) + (c*4);
    }


    if (sum > m)
        cout << m;
    else
        cout << m-sum;
    

    return 0;
}

