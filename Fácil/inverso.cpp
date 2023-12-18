#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[10];
    
    for (int i = 0; i < 10; i++)
        cin >> n[i];

    for (int i = 9; i != -1; i--)
        cout << n[i] << endl;
}
