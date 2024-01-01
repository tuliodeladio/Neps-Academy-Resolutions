#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,a;
    cin >> n >> a;
    vector<string> b;

    for (size_t i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        b.push_back(x);
    }
    

    sort(b.begin(),b.end());

    cout << b[a-1];

    return 0;

}
