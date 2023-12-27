#include <iostream>

using namespace std;

int main()
{
    int a[3][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    cout << "Diagonal principal: " << a[0][0] + a[1][1] + a[2][2]<< endl;
    cout << "Diagonal secundaria: " << a[2][0] + a[1][1] + a[0][2]<< endl;
        
    return 0;

}
