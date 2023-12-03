#include <iostream>

using namespace std;

int main()
{   
    int a,b;
    
    cin >> a >> b;
    
    if(a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
        
    for (a; a < (b+1); a++) {
        printf("%d ", a);
    }
    
    return 0;
}