#include<iostream>
#include <string.h>

using namespace std;

int main()
{
    int a;
    string b;
    
    cin >> a;
    
    cin.ignore();
    
    getline(cin, b);
    
    for (int i = 0; i < a; i++) {
        cout << b << endl;
    }
    
    return 0;
}
