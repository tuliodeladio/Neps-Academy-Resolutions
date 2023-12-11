#include<iostream>

using namespace std;

int main()
{
    int x,c=0;
    int m[5] = {300,1500,600,1000,150};

    for(int i = 0; i < 5; i++) {
        cin >> x;
        c += x*m[i];
    }
    
    cout << c+225;
    
    
    return 0;
}

