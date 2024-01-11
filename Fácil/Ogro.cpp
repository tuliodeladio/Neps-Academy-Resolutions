#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        cout << '*' << endl << '*';
    else {
        int l1 = n, l2 = n-5;

        if (n > 5)
            l1 = 5;
        
        for (size_t i = 0; i < l1; i++)
            cout << 'I';
        
        cout << endl;
        if (l2 <= 0)
            cout << '*';
        else {
            for (size_t i = 0; i < l2; i++)
            cout << 'I';
        }
        
    }
    return 0;
}
