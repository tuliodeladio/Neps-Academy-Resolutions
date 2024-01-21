#include <iostream>

using namespace std;

int main()
{
    string a;
    getline(cin,a);

    char ant=a[0]+1;

    for(char i : a) {
        if (i != ant) {
            cout << i;
            ant = i;
        }
    }
    
    
    return 0;
}
