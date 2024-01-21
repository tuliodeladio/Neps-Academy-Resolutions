#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int voltar(int n) {
    if (n % 2 == 0)
        return n*2;

    return n*3;
}

int main()
{
    int x;
    vector<int>n;

    while (cin >> x)
        n.push_back(x);

    cout << '[';
    
    for(int i = 0;i < n.size()-1;i++) {
        cout << voltar(n[i]) << ", ";
    }

    cout << voltar(n[n.size()-1]) << ']';
    
    
    
    return 0;
}
