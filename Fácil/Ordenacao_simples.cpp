#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nu[n];

    for (int i = 0; i < n; i++)
        cin >> nu[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (nu[i] < nu[j]) {
                int aux = nu[i];
                nu[i] = nu[j];
                nu[j] = aux;
            }
            
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << nu[i] << " ";
    
    return 0;
}
