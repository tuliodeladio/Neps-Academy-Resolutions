#include <iostream>

using namespace std;

int main()
{
    int p,d,b;
    cin >> p >> d >> b;
    p = (p*1) + (d*2) + (b*3);

    if (150 <= p)
        cout << 'B';
    else if (120 <= p)
        cout << 'D';
    else if (100 <= p)
        cout << 'P';
    else
        cout << 'N';
    
    
    return 0;
}
