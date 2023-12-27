#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string a;
    char b[5] = {'a','e','i','o','u'};
    vector<int> vetorV;
    vector<int> vetorC;

    cin >> a;

    for (size_t i = 0; i < a.length(); i++)
    {
        bool Vogal = false;
        for (size_t j = 0; j < 5; j++) {
            if (b[j] == a[i]) {
                Vogal = true;
                break;
            }
        }

        if (Vogal == true)
            vetorV.push_back(i);
        else
            vetorC.push_back(i);
    }

    cout << "Vogais: ";
    for (size_t i = 0; i < vetorV.size(); i++)
        cout << a[vetorV[i]];
    
    cout << endl << "Consoantes: ";
    for (size_t i = 0; i < vetorC.size(); i++)
        cout << a[vetorC[i]];

    return 0;
}
