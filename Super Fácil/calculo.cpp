#include<iostream>

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    
    if (A-B > A+B)
        cout << A-B << endl << A+B;
    else
        cout << A+B << endl << A-B;
    return 0;
}
