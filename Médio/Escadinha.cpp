#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <map>


using namespace std;

int main()
{   
    int n;
    cin >> n;

    int numeros[n];

    for (int& numero : numeros)
        cin >> numero;


    int escadinhas = 1;

    if (n == 2) {
        cout << escadinhas;
    }

    int diferencaatual = numeros[1] - numeros[0];

    for (size_t i = 1; i < n; i++)
    {
        int dif = numeros[i]-numeros[i-1];
        if (dif != diferencaatual) {
            escadinhas++;
            diferencaatual = dif;
        }
    }

    cout << escadinhas;



    return 0;
}