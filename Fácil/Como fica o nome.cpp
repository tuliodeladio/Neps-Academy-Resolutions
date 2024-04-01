#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    
    for (size_t i = 0; i < n; i++)
    {
        long long int m;
        cin >> m;

        string a;
        
        getline(cin,a);

        long long int x = 0;

        if (m != 0) {
            
            long long int llll = a.length()-1;
            
            x = (m%llll)+1;
            cout << a.substr(x,a.length()-1) << a.substr(1,x-1);
        }
        else
            cout << a.substr(1,a.length()-1);
        cout << endl;

    }
    

    
    
    return 0;
}
