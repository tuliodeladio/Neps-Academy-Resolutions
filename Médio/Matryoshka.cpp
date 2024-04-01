#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


void tirar(vector<int>a, vector<int>b) {
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i]) {
            a.erase(a.begin() + i);
            tirar(a,b);
            break;
        }

    }
    
}

int main() {
    int n;
    cin >> n;

    vector<int> a;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    vector<int> b(a.begin(),a.end());

    sort(b.begin(),b.end());

    tirar(a,b);

    for (int i : a) {
        cout << i << ' ';
    }
    
    

    return 0;
}
