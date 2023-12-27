#include <iostream>

using namespace std;

int main(){
    
    int l, count = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> l;
        if (l%5 == 0 or l%2 == 0)
            count++;
    }

    cout << count;

    return 0;
}
