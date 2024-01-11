#include <iostream>

using namespace std;

int main()
{
    string a[3];

    for (size_t i = 0; i < 3; i++)
        cin >> a[i];
    

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = i+1; j < 3; j++)
        {
            if (a[i] == a[j])
            {
                cout << "N";
                return 0;
            }
            
        }
    }
    
    
    cout << "S";
    return 0;
}
