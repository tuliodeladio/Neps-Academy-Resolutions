#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[10], c, count = 0, n2[10];
    
    for (int i = 0; i < 10; i++){
        cin >> n[i];
        n2[i] = -1;
    }

    cin >> c;

    for (int i = 0; i < 10; i++) {
        if (n[i] == c) {
            count++;
            n2[i] = i;
        }
    }

    if (count == 0)
        cout << "Mia x";
    else {
        cout << count << endl;
        for (int i = 0; i < 10; i++)
        {
            if (n2[i] != -1)
            {
                cout << i << " ";
            }
            
        }
        
    }
    
    
    return 0;
}
