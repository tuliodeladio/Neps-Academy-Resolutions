#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0, n,x;
    char e;

    cin >> n >> e;

    if (e == 'A')
        a = 1;
    else if (e == 'B')
        b = 1;
    else
        c = 1;

    for (size_t i = 0; i < n; i++)
    {   
        cin >> x;
        if (x == 1) {
            if (a == 1 && b == 0) {
                a = 0;
                b = 1;
            }
            else if (a == 0 && b == 1) {
                a = 1;
                b = 0;
            }
        }

        else if (x == 2) {
            if (b == 1 && c == 0) {
                b = 0;
                c = 1;
            }
            else if (b == 0 && c == 1) {
                b = 1;
                c = 0;
            }
        }

        else {
            if (c == 1 && a == 0) {
                c = 0;
                a = 1;
            }
            else if (c == 0 && a == 1) {
                c = 1;
                a = 0;
            }
        }
    }
    
    if (a == 1)
        cout << 'A';
    else if (b == 1)
        cout << 'B';
    else
        cout << 'C';
    


    
    
    return 0;
}
