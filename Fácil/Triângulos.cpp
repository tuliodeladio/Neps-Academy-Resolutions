#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int lados[3];
    cin >> lados[0] >> lados[1] >> lados[2];


    if (lados[0]+lados[1] > lados[2] and lados[0]+lados[2] > lados[1] and lados[1]+lados[2] > lados[0]) {

        sort(lados, lados + 3);


        if (lados[0] * lados[0] + lados[1] * lados[1] == lados[2] * lados[2])
            cout << 'r';
            
        else if (lados[0] * lados[0] + lados[1] * lados[1] > lados[2] * lados[2])
            cout << 'a';
            
        else
            cout << 'o';
            
    } 
    
    else {
        cout << "n";
    }

    return 0;
}
