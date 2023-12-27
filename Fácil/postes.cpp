#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int s=0,c=0,n;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < 50)
            s++;
        else if (a < 85)
            c++;
    }

    cout << s << " " << c;
    

    return 0;
}
