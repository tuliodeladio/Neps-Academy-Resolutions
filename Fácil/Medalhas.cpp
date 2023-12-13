#include <iostream>

using namespace std;

int main()
{
    int T1, T2, T3;

    cin >> T1 >> T2 >> T3;

    if(T1<T2 && T2<T3){
        cout << 1 << endl << 2 << endl << 3;
    }

    if(T1<T3 && T3<T2){
        cout << 1 << endl << 3 << endl << 2;
    }

    if(T2<T1 && T1<T3){
        cout << 2 << endl << 1 << endl << 3;
    }

    if(T2<T3 && T3<T1){
        cout << 2 << endl << 3 << endl << 1;
    }

    if(T3<T1 && T1<T2){
        cout << 3 << endl << 1 << endl << 2;
    }

    if(T3<T2 && T2<T1){
        cout << 3 << endl << 2 << endl << 1;
    }

    return 0;
}
