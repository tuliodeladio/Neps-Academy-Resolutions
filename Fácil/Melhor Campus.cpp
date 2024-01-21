#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string x[3] = {"Sobral","Ubajara","Tiangua"};

    n = n%3;

    cout << x[n];
    
    return 0;
}
