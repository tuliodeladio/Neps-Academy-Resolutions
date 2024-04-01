#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> a;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        a[x]++;
    }

    for (auto i : a) {
        if (i.second > 1) {
            cout << "A funcao nao eh boa.";
            return 0;
        }
    }

    cout << "A funcao eh boa.";
    
    
    return 0;
}
