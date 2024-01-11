#include <iostream>

using namespace std;

int main()
{
    int n,soma=0;
    cin >> n;
    int a[n];

    for (int& i : a)
        cin >> i;
    
    for (int i : a)
        soma+=i;

    soma/=n;

    for (int i : a)
        cout << soma-i << endl;


    return 0;
}
