#include <iostream>
#include <iomanip>
#include <cstring> // Para strlen()
using namespace std;

int main() {
    char letra;
    cin >> letra;
    cin.ignore();

    char palavra[1000];
    cin.getline(palavra, 1000);

    int contagem_palavra = 0;
    int contagem_palavra_com_letra = 0;

    bool palavra_tem_letra = false;

    for (int i = 0; i <= strlen(palavra); i++) {
        if (palavra[i] == letra) {
            palavra_tem_letra = true;
        }

        if (palavra[i] == ' ' || palavra[i] == '\0') {
            if (palavra_tem_letra) {
                contagem_palavra_com_letra++;
            }
            contagem_palavra++;
            palavra_tem_letra = false;
        }
    }

    double porcentagem = (double)contagem_palavra_com_letra * 100 / contagem_palavra;
    cout << fixed << setprecision(1) << porcentagem << endl;

    return 0;
}
