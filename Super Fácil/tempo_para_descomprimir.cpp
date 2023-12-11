#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int a[x];
    char b[x];
    
    for (int i = 0; i < x; i++) {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << b[i];
        }
        cout << endl;
    }
    
    
    return 0;
}

