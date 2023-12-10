#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    
    if (B > A)
        A = B;
    if (C > A)
        A = C;
        
    cout << A;

    return 0;
}
