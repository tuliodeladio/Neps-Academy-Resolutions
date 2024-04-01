#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string a;
    cin >> a;

    vector<char> letras;

    for (char i : a) {
        if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
            letras.push_back(i);
    }

    vector<char> inverso(letras.rbegin(), letras.rend());
    
    
	for (size_t i = 0; i < letras.size(); i++)
    {
        if (letras[i] != inverso[i]) {
            cout << 'N';
            return 0;
        }
    }


    cout << 'S';

    return 0;
}
