#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;

    for (char i : a) {
        if (i == '+')
            cout << " tighten ";
        else if (i == '-')
            cout << " loosen ";
        else if (i >= '0' and i <= '9')
            cout << i << endl;
        else 
            cout << i;
    }
    
    
    return 0;
}
