#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        char ant = x[0];
        int count=0;
        
        for (char i : x) {
            if (i == ant)
                count ++;
            else {
                cout << count << ' ' << ant << ' ';
                count = 1;
                ant = i;
            }
        }
        cout << count << ' ' << ant << ' ';
        cout << endl;

    

    }
    
    
    
    return 0;
}
