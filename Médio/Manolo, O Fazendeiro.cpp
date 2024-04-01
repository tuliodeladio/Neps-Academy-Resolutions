#include <iostream>

using namespace std;


int main() {

    int n;

    cin >> n;
    

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }   
    }

    int q;
    cin >> q;



    int cenouras_coletadas = 0;


    for (size_t i = 0; i < q; i++)
    {

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (size_t i = x1-1; i < x2; i++)
        {
            for (size_t j = y1-1; j < y2; j++) {

                cenouras_coletadas += matriz[i][j];
                matriz[i][j] = 0;
            }
        }
    }

    cout << cenouras_coletadas;
    
    

    return 0;
}
