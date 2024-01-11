#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string a,b;
    cin >> n;
    cin.ignore();

    getline(cin,a);
    getline(cin,b);

    for (size_t i = 0; i < n; i++) {
        if (a[i] >= 'a' and a[i]  <= 'z') {
            for (size_t j = 0; j < n; j++) {
                if (b[j] >= 'a' and b[j] <= 'z') {
                    if (a[i]  == b[j]){
                        b[j] = '@';
                        break;
                    }
                }
            }
        }
    }
    
    for (char i : b) {
        if (i != '@' and i!= ' ' and i != ',' and i != '.')
        {
            cout << "N";
            return 0;
        }
    }

    cout << "S";
    return 0;

}
