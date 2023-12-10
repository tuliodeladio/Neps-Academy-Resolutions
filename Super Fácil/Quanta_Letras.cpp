#include <iostream>

using namespace std;

int main()
{
    string palavra;
    int c=0;
    char x;

    cin >> palavra;
    cin >> x;
    
    for (int i = 0; i < palavra.length(); i++)
    {
        if (palavra[i] == x)
        c++;
    }
    
    cout << c;
    
    return 0;
}
