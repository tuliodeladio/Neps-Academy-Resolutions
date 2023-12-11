#include <iostream>
#include <string>

using namespace std;

int main() {
    string a[] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};
    string b;

    cin >> b;

    for(int i = 0; i < 7; i++) {
        if (b == a[i]) {
            cout << "Regiao Norte";
            return 0;
        }
    }

    cout << "Outra regiao";
    return 0;
}