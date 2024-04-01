#include <iostream>

using namespace std;

int main()
{
    int n;
    string a;
    cin >> n >> a;

    char ant = a[0];
    int count=0;
    
    a+='1';
    
    
    for (char i : a) {
        if (i == ant)
            count++;
        else {
            cout << count << ' ' << ant << ' ';
            count = 1;
            ant = i;
        }
    }
    
    
    return 0;
}
