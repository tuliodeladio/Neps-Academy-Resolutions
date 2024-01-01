#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2,n;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int metade = n/2;

    if ((metade >= x1 and metade < x2) or (metade >= y1 and metade < y2) or (metade >= x2 and metade < x1) or (metade >= y2 and metade < y1))    
        cout << 'S';
    else
        cout << 'N';
    
    return 0;
}
