#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int f[3];
    cin >> f[0] >> f[1] >> f[2];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++) {
            if (f[i] > f[j])
            {
                int aux = f[i];
                f[i] = f[j];
                f[j] = aux;
            }
            
        }
    }

    if ((f[0]-(f[1]+f[2])) == 0)
        cout << 'S';
    else if (f[0] == f[1] or f[0] == f[2] or f[1] == f[2])
        cout << 'S';
    else
        cout << 'N';
    
    return 0;
    
}
