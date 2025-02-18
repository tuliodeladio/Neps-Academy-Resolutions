#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;


int main() {
    int n;
    cin >> n;


    int tamanhos[] = {8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

    int dispositivos = 0;

    for (size_t i = 0; i < 14; i++)
    {
        if (tamanhos[i] <= n) {
            dispositivos+=n/tamanhos[i];
            n = n%tamanhos[i];
            if (n == 0)
                break;
        }
    }
    cout << dispositivos;
    
    return 0;
}
