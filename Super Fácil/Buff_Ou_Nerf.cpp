#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A*B > C*D)
        cout << "NERF";
    else
        cout << "BUFF";
    
    return 0;
}
