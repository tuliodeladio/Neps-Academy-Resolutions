#include <iostream>

using namespace std;

int main()
{
    int count = 1;
    while (true)
    {
        
        int x;
        cin >> x;

        if (x == 0)
            return 0;

        cout << "Teste " << count << endl;
        count ++;

        string a,b;
        cin >> a >> b;

        for (size_t i = 0; i < x; i++)
        {
            int c,d;
            cin >> c >> d;

            if ((c+d) % 2 == 0)
                cout << a;
            else
                cout << b;
            
            cout << endl;
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}
