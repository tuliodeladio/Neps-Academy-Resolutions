#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B;

    C = (A * B) + ((A-1)*(B-1));
    D = 2*((A - 1) + (B -1));

    cout << C << D;
}
