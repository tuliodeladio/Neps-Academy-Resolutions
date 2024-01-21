#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    string ms;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int l;
        string no;
        cin >> no >> l;

        if (l > m) {
            ms=no;
            m=l;
        }
    }

    cout << ms;
    
    
    
    return 0;
}
