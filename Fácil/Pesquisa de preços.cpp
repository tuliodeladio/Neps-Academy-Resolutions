#include <iostream>

using namespace std;

int main()
{
    int n;
    bool x=false;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string k;
        double a,g;
        
        cin >> k >> a >> g;
        
        
        if (g*0.7 >= a) {
            cout << k << endl;
            x=true;
        }
    }

    if (x==false)
        cout << '*';
    
}
