#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t[4],count=0;

    for (size_t i = 0; i < 4; i++)
        cin >> t[i];
    
    for (size_t i = 0; i < 3; i++)
        count+=t[i]-1;
    
    cout << count+t[3];
        
    return 0;
    
}
