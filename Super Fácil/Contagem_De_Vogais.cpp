#include <iostream>

using namespace std;

int main()
{
    int x, d=0;
    cin >> x;
    
    string a;
    cin >> a;
    
    char m[5] = {'a','e','i','o','u'};
    
    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < x; i++) {
            if (m[j] == a[i])
                d++;
        }
    }
    
    cout << d;
    
    
    
    return 0;
}
