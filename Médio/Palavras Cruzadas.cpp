#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    
    string x,y;
    cin >> x >> y;

    int SizeOfX = x.size();
    int SizeOfY = y.size();

    int xx = -1,yy = -1;

    for (int i = SizeOfX-1; i >= 0; i--)
    {
        for (int j = SizeOfY-1; j >= 0; j--)
        {
            if (x[i] == y[j] ) {
                xx = i+1;
                yy = j+1;
                cout << xx << ' ' << yy;
                return 0;
            }
        }
    }
    
    cout << xx << ' ' << yy;
    return 0;
    
    
}
