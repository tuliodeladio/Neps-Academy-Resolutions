#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    vector<int>n;

    while (cin >> x)
        n.push_back(x);

    sort(n.begin(),n.end());
    
    cout << "Apesar de muitas moedinhas o maior produto encontrado foi " << n[n.size()-1]*n[n.size()-2];
    
    
    
    return 0;
}
