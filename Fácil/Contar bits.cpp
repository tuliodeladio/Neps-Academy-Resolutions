#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int n;
    int count = 0;
    cin >> n;

    string bits1 = bitset<57>(n).to_string();

    for (char bit : bits1) {
        if (bit == '1')
            count++;
    }

    cout << count;
}
