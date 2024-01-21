#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,n;
    string x;
    cin >> n >> x;

    for (char i : x) {
        if (i == 'A')
            a++;
        else
            b++;
    }

    if (a > b)
        cout << 'A';
    else if (a < b)
        cout << 'B';
    else
        cout << "Tie";
    
    
    return 0;
}
