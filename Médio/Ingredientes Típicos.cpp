#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <map>
#include <cstring>


using namespace std;

int main()
{   
    int tipicosn;
    cin >> tipicosn;

    string tipicos[tipicosn];

    for (auto& tipico : tipicos) {
        cin >> tipico;
    }

    int pratosn;
    cin >> pratosn;

    for (size_t i = 0; i < pratosn; i++)
    {
        string nomedoprato;
        cin >> nomedoprato;
        
        int ingredientesN;
        cin >> ingredientesN;

        int tipicosContador = 0;
        for (size_t j = 0; j < ingredientesN; j++)
        {
            string ingrediente;
            cin >> ingrediente;

            for (auto ingtipico : tipicos) {
                if (strstr(ingrediente.c_str(), ingtipico.c_str())) {
                    tipicosContador++;
                    break;
                }
            }
        }

        double metade = ingredientesN/2;

        if (metade < (double)tipicosContador)
            cout << "porcao tipica" << endl;
        else
            cout << "porcao comum" << endl;

    }
    



    return 0;
}