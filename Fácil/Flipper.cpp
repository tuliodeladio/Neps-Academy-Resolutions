#include <iostream>

using namespace std;

int main()
{
    int a[2][2] = {1,2,3,4};

    string b;
    cin >> b;

    for (char i : b)
    {
        
        if (i == 'H') {

            int aux;
            aux = a[0][0];
            a[0][0] = a[1][0];
            a[1][0] = aux;

            aux = a[0][1];
            a[0][1] = a[1][1];
            a[1][1] = aux;

        }

        else if (i == 'V'){

            int aux;
            aux = a[0][0];
            a[0][0] = a[0][1];
            a[0][1] = aux;

            aux = a[1][0];
            a[1][0] = a[1][1];
            a[1][1] = aux;
        }
    }

    
    cout << a[0][0] << ' ' << a[0][1] << endl << a[1][0] << ' ' << a[1][1];
    
    
    return 0;
}
