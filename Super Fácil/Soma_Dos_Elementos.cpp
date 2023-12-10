#include <iostream>

using namespace std;

int main()
{
    int X, f=0, IN;

    cin >> X;
    

    for (int i = 0; i < X; i++)
    {
        cin >> IN;
        f += IN;
    }

    cout << f << endl;
    
    return 0;
}
