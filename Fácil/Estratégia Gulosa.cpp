#include <iostream>
#include <string.h>
using namespace std;

int main()
{   
    
    int a, d[6]={100,50,25,10,5,1}, notas = 0;

    cin >> a;

    for (int i = 0; i < 6; i++)
    {
        int x = a/d[i];
        a = a-(x*d[i]);
        notas+=x;
    }
    
    

    cout << notas;
    

    return 0;
}