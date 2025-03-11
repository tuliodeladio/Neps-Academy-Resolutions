#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    string x;
    cin >> x;

    int mediaS = 0, mediaN=0;
    for (size_t i = 0; i < x.length(); i++)
    {
        if (x[i] != '1')
            mediaS+= x[i] - '0';

        else if (i+1 != x.length() and x[i+1] == '0') {
            mediaS+= 10;
            i++;
        }

        else
            mediaS+= 1;

        mediaN++;

    }
    
    cout << setprecision(2) << fixed << (double)mediaS/mediaN;
}
