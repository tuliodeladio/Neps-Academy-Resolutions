#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int& i : a)
        cin >> i;
    
    int m = *max_element(a,a+n);

    int soma = 0;

    for (int i : a) {
        
        if (i != m)
            soma+=i;
        else {
            cout << soma << endl;
            soma = 0;
        }
    }

    cout << soma;


    return 0;
}
