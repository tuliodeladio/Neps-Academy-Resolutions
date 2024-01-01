#include <iostream>

using namespace std;

int main()
{
    char a[6];
    int venceu = 0;

    for (auto& i : a)
        cin >> i;

    for (char i : a) {
        if (i == 'V')
            venceu++;
    }

    if (venceu > 4)
        cout << 1;
    else if (venceu > 2)
        cout << 2;
    else if (venceu > 0)
        cout << 3;
    else
        cout << -1;


    return 0;

}