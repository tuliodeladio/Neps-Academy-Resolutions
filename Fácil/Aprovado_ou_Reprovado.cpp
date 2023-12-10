#include <iostream>

using namespace std;

int main()
{
    float A,B;

    cin >> A >> B;

    A = (A+B)/2;
    
    if (A >= 7)
        cout << ("Aprovado") << endl;
    else if (A >= 4)
        cout << ("Recuperacao") << endl;
    else
        cout << ("Reprovado") << endl;
    
    return 0;
}
