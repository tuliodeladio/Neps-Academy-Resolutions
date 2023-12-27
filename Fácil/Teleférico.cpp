#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int c,a;
    cin >> c >> a;
    
    if(a%(c-1) == 0)
        cout << (a/(c-1));
    else
        cout << (a/(c-1))+1;
    
    return 0;
    
    
}
