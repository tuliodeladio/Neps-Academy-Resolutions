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
    int saiu[n2];

    for (int i = 0; i < n2; i++)
        cin >> saiu[i];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++){
            if (fila[i] == saiu[j]) {
                fila[i] = -1;
                break;
            }
        }
    }
    
    for (int i = 0; i < n1; i++) {
        if (fila[i] != -1)
            cout << fila[i] << " ";
    }


    return 0;
}
