#include <iostream>

using namespace std;

int main()
{
    int a,s,d,count=0,subi=0;
    cin >> a >> s >> d;

    while (subi < a)
    {
        count++;
        subi+=s;
        if (subi >= a)
            break;
        subi+=(-1*d);
    }
    
    cout << count;
    
    
    return 0;
}
