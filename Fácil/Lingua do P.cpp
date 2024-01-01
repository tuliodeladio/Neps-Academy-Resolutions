#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string a;
    
    getline(cin, a);

    string b = "";

    for (size_t i = 0; i < a.length(); ++i) {
        
        if (a[i] == 'p') {
            
            if (i + 1 < a.length()) {
                b += a[i + 1];
                i++;
            } 
            
            else {
                b += a[i];
            }
            
        } 
        
        else {
            b += a[i];
        }
    }

    cout << b;

    return 0;
}
