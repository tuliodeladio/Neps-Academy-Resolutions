#include <iostream>

using namespace std;

int main()
{
    int a,b,count = 0,soma=0;
    

    cin >> a >> b;
    
    a = b - a;

    while (soma < b)
    {
        soma += a;
        count++;
    }

    cout << count;
    
    
    
    return 0;
}
