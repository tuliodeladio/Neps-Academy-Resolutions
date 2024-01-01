#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    vector<int> n;
    int a;

    for (size_t i = 0; i < 3; i++) {
        cin >> a;
        n.push_back(a);
    }
        

    sort(n.begin(),n.end());

    cout << n[1];
    
    return 0;
}
