#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0, Q;
    int in;
    
    cin >> Q;
    
    for(int i=0;i < Q;i++) {
        
        cin >> in;
        
        if (in == 1) {
            if (A == 0)
                A = 1;
            else
                A = 0;
        }
        
        else {
            if (B == 0)
                B = 1;
            else
                B = 0;
                
            if (A == 0)
                A = 1;
            else
                A = 0;
        }
        

    }
    
    cout << A;
    cout << B;

    return 0;
}