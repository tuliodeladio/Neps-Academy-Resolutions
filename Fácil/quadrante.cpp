#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if (x == 0 or y == 0)
        cout << "eixos";
    else if (x > 0 and y > 0)
        cout << "Q1";
    else if (x < 0 and y > 0)
        cout << "Q2";
    else if (x < 0 and y < 0)
        cout << "Q3";
    else
        cout << "Q4";

    return 0;
}
