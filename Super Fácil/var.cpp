#include <iostream>

using namespace std;

int main() {
    
    int x,y;
    
    cin >> x >> y;
    
    if (x < -8 || x > 8 || y < 0 || y > 8)
        cout << "N";
    else
        cout << "S";
    return 0;
}