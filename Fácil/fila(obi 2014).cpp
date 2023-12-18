#include <iostream>

using namespace std;

int main()
{
    int n1,n2,a;
    cin >> n1;
    int fila[n1];
    
    for (int i = 0; i < n1; i++)
        cin >> fila[i];

    cin >> n2;

    for (int i = 0; i < n2; i++){
        cin >> a;
        for (int j = 0; j < n1; j++){
            if (fila[j] == a)
                fila[j] = -1;
        }
    }

    for (int i = 0; i < n1; i++) {
        if (fila[i] != -1)
        {
            cout << fila[i] << " ";
        }
        
    }

    
    return 0;
}
