#include <iostream>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    
    int l = a.length();

    if(a[l-3] == 'e' and a[l-2] == 'h' and a[l-1] == '?' and l >= 3)
        cout << "Canadian!";
    else
        cout << "Imposter!";
    
    
    return 0;
}
