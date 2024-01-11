#include <iostream>

using namespace std;


int contar(string d) {
    int soma = 0;

    for (size_t i = 0; i < 3; i++)
    {
        string in;
        cin >> in;

        if (in[0] == 'A')
            soma+=10;
        else if (in[0] == 'J')
            soma+=11;
        else if (in[0] == 'Q')
            soma+=12;
        else
            soma+=13;

        if (in[1] == d[1])
            soma+=4;
    }

    return soma;
}



int main()
{ 
    string d;
    cin >> d;

    int a = contar(d);
    int b = contar(d);

    if (a > b)
        cout << "Luana";
    else if (a < b)
        cout << "Edu";
    else
        cout << "empate";

    return 0;
}
