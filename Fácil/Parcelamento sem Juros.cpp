#include <iostream>

using namespace std;

int main(){

	int a,b;
    cin >> a >> b;

    int d = a/b;
    int e = a%b;

    for (int i = 0; i < b; i++) {
        if (i < e)
            cout << d + 1 << endl;
        
        else
            cout << d << endl;
    }
    


    return 0;
}
