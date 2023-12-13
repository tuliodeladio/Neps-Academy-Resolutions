#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
    int a;
    cin >> a;
    
    double b[a];
    
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < a; i++) {
        cout << fixed << setprecision(4) << sqrt(b[i]) << endl;
    }
    
    return 0;
}
