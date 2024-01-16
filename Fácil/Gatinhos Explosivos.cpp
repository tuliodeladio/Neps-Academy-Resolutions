#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;


    if (a == -1) {
        if (b == 1 || c == 1) 
            cout << 1;
        else
            cout << 2;
        
    } 
    
    else
        cout << 3;
    

    return 0;
}
