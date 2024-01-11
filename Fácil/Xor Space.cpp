#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string a;
    cin >> a;

    for(char i : a) {
        if (islower(i))
            cout << static_cast<char>(toupper(i));
        else
            cout << static_cast<char>(tolower(i));
    }
    
    return 0;
}
