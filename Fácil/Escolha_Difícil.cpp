#include <iostream>

using namespace std;

int main()
{
    int d[3], r[3], f = 0;
    cin >> d[0] >> d[1] >> d[2] >> r[0] >> r[1] >> r[2];

    for (int i = 0; i < 3; i++) {
        if (d[i] < r[i])
            f += r[i] - d[i];
    }
    cout << f << endl;
    
    return 0;
}