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

    for (size_t i = 0; i < 3; i++)
    {
        int soma = 0;
        for (size_t j = 0; j < 3; j++) {
            soma+=a[i][j];
        }

        cout << "Linha " << i << ": " << soma << endl;
        
            
    }
    
}
