#include <iostream>

using namespace std;


int main()
{
    int n,count = 0;
    cin >> n;
    string c;
    cin >> c;

    for (char i : c) {
        if (i == 'P')
            count+= 2;
        else if (i == 'C')
            count+= 2;
        else if (i == 'A')
            count+= 1;
    }

    cout << count;

    return 0;
}
