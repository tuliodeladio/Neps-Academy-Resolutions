#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string a;
    unordered_map<char, char> b;
    cin >> a;

    int count = 97;


    for (char i : a) {
        if (b.find(i) != b.end())
            cout << b[i];
        else {
            b[i] = static_cast<char>(count);
            count++;
            cout << b[i];
        }
    }

    return 0;
}
