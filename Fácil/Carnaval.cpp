#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    vector<double> n;
    double a;

    for (size_t i = 0; i < 5; i++)
    {
        cin >> a;
        n.push_back(a);
    }

    sort(n.begin(), n.end());
    
    cout << fixed << setprecision(1) << n[1]+n[2]+n[3];
}