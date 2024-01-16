#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a[3];

    for (int& i : a)
        cin >> i;

    sort(a,a+3);

    cout << a[1]+a[2];
    
    
    return 0;
}
