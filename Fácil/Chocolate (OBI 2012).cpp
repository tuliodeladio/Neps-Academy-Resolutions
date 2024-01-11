#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n,po=0;
    cin >> n;

    while (n != 1)
    {
        po++;
        n = n/2;
    }

    cout << (int)pow(4,po);
    

    return 0;
    
}
