#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "N";
        return 0;
    }

    string b = bitset<60>(n).to_string();

    size_t firstOne = b.find('1');
    b = b.substr(firstOne);

    for (char i : b) {
        if (i == '0') {
            cout << "N";
            return 0;
        }
    }

    cout << "S";


    return 0;
    
    
}
