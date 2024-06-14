#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    int N, D;
    while (cin >> N >> D, N != 0 and D != 0) {

        string numero;
        cin >> numero;
        stack<char> pilha;

        for (char digito : numero) {
            while (!pilha.empty() and D > 0 and pilha.top() < digito) {
                pilha.pop();
                D--;
            }

            pilha.push(digito);
        }

        while (D > 0 && !pilha.empty()) {
            pilha.pop();
            D--;
        }

        string maior;
        while (!pilha.empty()) {
            maior = pilha.top() + maior;
            pilha.pop();
        }

        cout << maior << endl;
    }

    return 0;
}
