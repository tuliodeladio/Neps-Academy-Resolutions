#include <iostream>

using namespace std;

int main()
{
    int N,D,A;
    cin >> N >> D >> A;

    if (A > D)
        cout << N-A+D;
    else
        cout << D-A;
        
    return 0;
}
