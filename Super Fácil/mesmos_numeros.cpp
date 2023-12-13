#include<iostream>
#include <string.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a[0] == a[1])
        cout << 1;
    else
        cout << 0;
    
    return 0;
}
