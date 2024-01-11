#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int& i : a)
        cin >> i;

    int x = a[0] + a[n-1];
    
    for (size_t i = 0; i < n; i++) {
        
        int soma = a[i] + a[n-i-1];
        
        if ((a[i] + a[n-i-1]) != x) {
            cout << 'N';
            return 0;
        }

    }
    
    cout << 'S';
    return 0;

}
