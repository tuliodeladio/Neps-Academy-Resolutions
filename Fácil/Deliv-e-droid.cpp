#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int aa = a*50;
    int bb = b*10;

    if (a <= b)
        cout << aa-bb;
    else
        cout << aa-bb + 500;


    
    
    return 0;
}
