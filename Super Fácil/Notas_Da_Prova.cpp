#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;
    
    if (A == 0)
        cout << "E";
    else if (A <= 35)
        cout << "D";
    else if (A <= 60)
        cout << "C";
    else if (A <= 85)
        cout << "B";
    else
        cout << "A";
    return 0;
}
