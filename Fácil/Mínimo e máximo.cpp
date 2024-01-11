#include <iostream>
#include <string>

using namespace std;

int soma(int a) {
    string x = to_string(a);
    int soma=0;

    for (char i : x) {
        soma+=(i-'0');
    }

    return soma;
}



int main()
{
    int s,min,max;
    cin >> s >> min >> max;

    for (int i = min; i < max; i++)
    {
        int k = soma(i);
        if (k == s) {
            cout << i << endl;
            break;
        }
    }

    for (int i = max; i > min; i--)
    {
        int k = soma(i);
        if (k == s) {
            cout << i;
            break;
        }
    }
    
    return 0;
}
