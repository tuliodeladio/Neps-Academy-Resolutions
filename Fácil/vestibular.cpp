#include <iostream>

using namespace std;

int main()
{   
    int n, c=0;
    cin >> n;

    char p1[n];
    char p2[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> p2[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (p1[i] == p2[i])
        {
            c++;
        }
    }

    cout << c;
    


    return 0;


}
