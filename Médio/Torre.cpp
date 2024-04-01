#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));
    
	vector<int> somaLinhas(n, 0);
    vector<int> somaColunas(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            cin >> matriz[i][j];
			
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
            
        }
    }

    int maximo = 0;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int peso = somaLinhas[i] + somaColunas[j] -2* matriz[i][j];
            maximo = max(maximo, peso);
        }
    }

    cout << maximo << endl;

    return 0;
}
