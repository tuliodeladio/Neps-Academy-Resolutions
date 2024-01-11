#include <iostream>

using namespace std;

int main()
{
    int a[5];
    
    for (int& i : a)
        cin >> i;

    if (a[0] == a[1] and a[1] == a[2] and a[2] == a[3] and a[3] == a[4])
        cout << "5 0";
    
    else {
        int trofeus = 0,placas = 0;
        for (int i : a) {
            if (i == a[0])
                trofeus++;
        }
        
        for (int i : a) {
            if (i == a[trofeus])
                placas++;
        }

        cout << trofeus << " " << placas;
    }
    return 0;
}
