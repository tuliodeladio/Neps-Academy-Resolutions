#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int op;
    cin >> op;
    
    int contador = 0;

    while (op > 0) {
        contador++;
        
        string x;
        cin >> x;
        x+='F';
        
        int total = 0;
        string num;
        char operatorr = 'i';

        for (char i : x) {

            if (i == '+' or i == '-' or i == 'F' or i == 'i') {
                if (operatorr == '+' or operatorr == 'i')
                    total += stoi(num);
                else if (operatorr == '-')
                    total -= stoi(num);
                
                num="";
            }

            

            if (i == '+')
                operatorr = i;
            else if (i == '-')
                operatorr = i;
            else
                num+=i;
        }

        if (contador > 1)
            cout << endl;

        cout << "Teste " << contador << endl << total;

        cin >> op;
    }
}
    