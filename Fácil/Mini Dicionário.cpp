#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string x,a[n],b[n];

    for (size_t i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    getline(cin,x);

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        for (size_t j = 0; j < n; j++)
        {
            if (x == a[j]) {
                cout << b[j] << ' ';
                break;
            }
        }
    }
    


    
    
    
    return 0;
}
