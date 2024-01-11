#include <iostream>

using namespace std;

int main()
{   
    string a = "abcdefghijklmnopqrstuvwxyz";
    string b,c;
    cin >> b >> c;

    for (char i : c) {
        for (size_t j = 0; j < a.length(); j++)
        {
            if (i == a[j]) {
                cout << b[j];
                break;
            }
        }
    }
}