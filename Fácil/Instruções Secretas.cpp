#include <iostream>

using namespace std;

int main()
{
    string anterior;

    while (true)
    {
        string x;
        cin >> x;

        if(x == "99999")
            break;
        
        int soma = (x[0]-48) + (x[1]-48);

        if (soma % 2 != 0) {
            cout << "left " << x[2] << x[3] << x[4];
            anterior = "left ";
        }
        else if (soma % 2 == 0 and soma != 0) {
            cout << "right " << x[2] << x[3] << x[4];
            anterior = "right ";
        }
        else {
            cout << anterior << x[2] << x[3] << x[4];
        }
        cout << endl;
    }
    
    
    
    return 0;
}
