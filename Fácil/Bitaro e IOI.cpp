#include <iostream>

using namespace std;

int main()
{
    int n;
    bool i1=false,i2=false,i3=false;
    string a;
    cin >> n >> a;

    for (char i : a) {
        if (i == 'I') {
            if (i1 == false)
                i1 = true;
            else if (i2 == true) {
                cout << "Yes";
                return 0;
            }
        }
        else if (i == 'O' && i1 == true)
            i2 = true;
    }
    
    cout << "No";

    
    return 0;
}
