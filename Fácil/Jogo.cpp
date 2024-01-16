#include <iostream>

using namespace std;

int main()
{
    int x=-11111,y;

    cin >> y;
    while (1 == 1)
    {
        cin >> x;

        if (x == y) {
            cout << "correto";
            return 0;
        }

        else if (x < y)
            cout << "maior" << endl;
            
        else
            cout << "menor" << endl;
        
    }
    
    
    return 0;
}
