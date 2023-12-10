#include <iostream>

using namespace std;

int main()
{
    string palavra;
    int t=0, d=0;

    cin >> palavra;

    while (palavra[d] != NULL)
    {
        t++;
        d++;
    }

    //.lenght() is so easy

    cout << d;
    
    
    return 0;
}
