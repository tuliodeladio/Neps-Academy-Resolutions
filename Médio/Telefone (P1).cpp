#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string x;
    cin >> x;

    for (char i : x) {

        if (i >= '0' and i <= '9' or i == '-')
            cout << i;

        else if (i >= 'A' and i <= 'C') 
            cout << '2';
        else if (i >= 'D' and i <= 'F') 
            cout << '3';
        else if (i >= 'G' and i <= 'I') 
            cout << '4';
        else if (i >= 'J' and i <= 'L') 
            cout << '5';
        else if (i >= 'M' and i <= 'O') 
            cout << '6';
        else if (i >= 'P' and i <= 'S') 
            cout << '7';
        else if (i >= 'T' and i <= 'V') 
            cout << '8';
        else if (i >= 'W' and i <= 'Z') 
            cout << '9';


    }

    return 0;
}
