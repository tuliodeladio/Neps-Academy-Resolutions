#include <iostream>

using namespace std;

int main()
{
    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;

    P1 = (P1*C1) - (P2*C2);
    
    

    if (P1 > 0)
        cout << -1 << endl;

    else if (P1 < 0)
        cout << 1 << endl;
    
    else
        cout << 0 << endl;
    
    return 0;
}
