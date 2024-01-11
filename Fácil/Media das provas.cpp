#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[3],x,y,c = 0,soma = 0;

    for (size_t i = 0; i < 3; i++)
    {
        cin >> x >> y;
        c+= y;
        soma += x * y;
    }

    cout << soma/c;
    
    return 0;
    
}
