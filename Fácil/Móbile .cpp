#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D;

    cin >> A >> B >> C >> D;

    if (A == B + C + D && B + C == D && B == C)
        cout << "S";
    else 
        cout << "N";
    
    return 0;
}
