#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    string parte[2];
    int count = 0;

    for(char i : a) {
        if (i != '/' and count <= 1) {
            parte[count] += i;
        }
        else if (i == '/' and count < 2)
            count++;
    }

    int parteint[2];

    for (size_t i = 0; i < 2; i++)
        parteint[i] = stoi(parte[i]);


    if (parteint[1] > 12)
        cout << "US";
    else if (parteint[0] > 12)
        cout << "EU";
    else
        cout << "either";
    
    
    return 0;
}
