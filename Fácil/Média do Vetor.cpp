#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    int n;
    double soma = 0;

    cin >> n;
    int v[n];

    for (int& i : v)
        cin >> i;
    
    for (int i : v)
        soma+= i;
        
    cout << fixed << setprecision(2) << soma/n;
    
    return 0;
}