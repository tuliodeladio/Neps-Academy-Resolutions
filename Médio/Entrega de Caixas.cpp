#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;


int main() {
    int caixas[3];
    cin >> caixas[0] >> caixas[1] >> caixas[2];

    sort(caixas, caixas + 3);

    if (caixas[0] == caixas[1] and caixas[1] == caixas[2])
        cout << 3;

    else if (caixas[0] < caixas[1] and caixas[1] < caixas[2])
        cout << 1;

    else if (caixas[0] < caixas[1] and caixas[1] == caixas[2])
        cout << 2;

    else if (caixas[0] == caixas[1] and caixas[1] < caixas[2] and caixas[0]+caixas[1] < caixas[2])
        cout << 1;

    
    return 0;
}
