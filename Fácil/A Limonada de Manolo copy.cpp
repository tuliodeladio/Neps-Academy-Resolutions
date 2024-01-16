#include <iostream>

using namespace std;

int main()
{
    int n,c,soma=0;;
    cin >> n >> c;
    
    
    if (n == 0)
        soma = c;
        
    else {
        for (size_t i = 0; i < n; i++) {
            int sub = c-i;
            if (sub <= 0)
                soma+=1;
            else
                soma+=sub;
        }
    }
    
    cout << soma;
    return 0;
}
