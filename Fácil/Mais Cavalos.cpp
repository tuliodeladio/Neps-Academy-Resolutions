#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    int n1 = static_cast<int>(a[1])-48;//num
    int n2 = static_cast<int>(b[1])-48;

    int c1 = static_cast<int>(a[0])-96;//char
    int c2 = static_cast<int>(b[0])-96;

    if ((n1-2 == n2 and c1+1 == c2) or (n1-1 == n2 and c1+2 == c2) or (n1+1 == n2 and c1+2 == c2) or (n1+2 == n2 and c1+1 == c2) or (n1+2 == n2 and c1-1 == c2) or (n1+1 == n2 and c1-2 == c2) or (n1-1 == n2 and c1-2 == c2) or (n1-2 == n2 and c1-1 == c2))
        cout << "VALIDO";
        
    else
        cout << "INVALIDO";

    return 0;
}
