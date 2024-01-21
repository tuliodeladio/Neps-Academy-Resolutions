#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if (a == 60 and b == a and b == c)
        cout << "Equilateral";
    else if (((a == b) or (a == c) or (b == c)) and ((a+b+c) == 180))
        cout << "Isosceles";
    else if ((a != b and a != c and b != c ) and ((a+b+c) == 180))
        cout << "Scalene";
    else if (a+b+c != 180)
        cout << "Error";
    
    
    return 0;
}
