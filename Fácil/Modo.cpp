#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int a[n],b[m];

    for (int& i : a)
        cin >> i;

    for (int& i : b)
        i = 0;


    for (int j = 1; j <= m; j++)
    {
        int count = 0;

        for (int i : a) {
            if(i == j)
                count++;
        }

        b[j-1] = count;
    }

    sort(b,b+m);

    cout << b[m-1];
    

    return 0;
}
