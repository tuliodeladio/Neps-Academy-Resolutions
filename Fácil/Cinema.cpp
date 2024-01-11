#include <iostream>

using namespace std;

int main()
{
    int a[2],soma=0;

    cin >> a[0] >> a[1];

    for (size_t i = 0; i < 2; i++)
    {
        if (a[i] <= 17)
            soma+=15;
        else if (a[i] <= 59)
            soma+=30;
        else 
            soma+=20;
    }

    cout << soma;
    

    return 0;
}
