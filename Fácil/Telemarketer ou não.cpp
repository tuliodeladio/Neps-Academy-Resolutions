#include <iostream>

using namespace std;

int main()
{
    int a[4];

    for (int& i : a)
        cin >> i;

    if ((a[0] == 9 or a[0] == 8) and (a[3] == 8 or a[3] == 9) and (a[1] == a[2]))
        cout << "ignore";
    else
        cout << "answer";

    
    
    
    return 0;
}
