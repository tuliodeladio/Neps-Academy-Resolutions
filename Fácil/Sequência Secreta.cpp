#include <iostream>

using namespace std;

int main()
{   
    int n,x,count = 0;
    cin >> n;
    int anterior = 2;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if (x != anterior) {
            count++;
            anterior = x;
        }
    }

    cout << count;
    
    
    return 0;
}