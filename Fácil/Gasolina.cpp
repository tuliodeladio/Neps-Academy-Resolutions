#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    if (n <= (60+k))
        cout << n*1500;
    else
        cout << ((60+k)*1500) + ((n-(60+k))*3000);
    
    
    return 0;
}
