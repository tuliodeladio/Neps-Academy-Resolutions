#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 0, x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        r += x;
    }
    
    cout << r;

    return 0;
}
