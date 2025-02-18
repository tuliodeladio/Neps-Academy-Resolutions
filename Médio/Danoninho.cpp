#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


int main() {
    long long int n,m;
    cin >> n >> m;

    long long int sum = 0;
    long long int imp = n;
    bool jaachou = false;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (sum == m and jaachou == false) {
            imp = i+1;
            jaachou = true;
        }
        
        if (sum > m and jaachou == false) {
            imp = i;
            jaachou = true;
        }

    }
    
    cout << imp;
    

    return 0;
}
