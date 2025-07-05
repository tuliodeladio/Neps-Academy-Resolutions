#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    
    int maximo,a,b;
    
    cin >> maximo >> a >> b;

    for (size_t i = b; i > 0; i--)
    {
        if (a % i == 0 and b % i == 0) {
            a=a/i;
            b=b/i;
        }
    }

    if (a <= maximo and b <= maximo) {
        cout << a << ' ' << b;
    }
    else
        cout << "IMPOSSIVEL";
    


    return 0;
}
