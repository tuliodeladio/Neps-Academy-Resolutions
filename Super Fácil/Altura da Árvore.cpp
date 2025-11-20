#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[] = {1,2,4,5,7};

    if (n <= 5)
        cout << x[n-1];

    else
        cout << 7+(6*(n-5)); 
    
    return 0;
}
