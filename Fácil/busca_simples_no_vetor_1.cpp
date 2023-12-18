#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[10], c;
    
    for (int i = 0; i < 10; i++)
        cin >> n[i];

    cin >> c;

    for (int i = 0; i < 10; i++) {
        if (n[i] == c) {
            cout << "SIM";
            return 0;
        }
    }
    cout << "NAO";
    return 0;
}
