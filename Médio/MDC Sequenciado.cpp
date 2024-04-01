#include <iostream>
#include <vector>

using namespace std;



int main() {
    int n;
    cin >> n;

    unsigned int x[n];

    vector<unsigned int> decompor;

    for (unsigned int& i : x)
        cin >> i;

    int nx = 2;

    while (1 == 1)
    {
        unsigned int count = 0;
        unsigned int xxx = 0;
        unsigned int count2 = 0;
        for (unsigned int& i : x) {
            if (i == 1) {
                xxx++;
                count2++;
            }

            else if (i%nx == 0) {
                count++;
                i = i/nx;
            }

            else
                count2++;
        }

        if (count == n)
            decompor.push_back(nx);
        
        if (xxx == n)
            break;

        if (count2 == n)
            nx++;
    }

    unsigned int mult = 1;

    for (unsigned int i : decompor)
        mult = mult*i;

    cout << mult;
    
    return 0;
}
