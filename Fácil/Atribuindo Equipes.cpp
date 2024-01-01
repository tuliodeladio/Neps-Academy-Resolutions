#include <iostream>

using namespace std;

int main()
{   
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int r[3] = {abs((a+b)-(c+d)),abs((a+c)-(b+d)),abs((a+d)-(c+b))};
    int menor = r[0];

    for (auto i : r) {
        if (i < menor)
            menor = i;
    }

    cout << menor;
        
    
    
    return 0;
}