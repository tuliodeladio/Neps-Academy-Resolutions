#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> y;
    y.push_back(1);

    int n,a=1,p=0;
    cin >> n;

    for (size_t i = 0; i < n-1; i++)
    {
        int x = a+p;
        y.push_back(x);
        p = a;
        a = x;
    }

    for (int i : vector<int>(y.rbegin(),y.rend()))
        cout << i << ' ';
    
    return 0;
}
