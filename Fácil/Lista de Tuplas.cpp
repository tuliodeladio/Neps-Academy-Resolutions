#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<string, string>> a;
    

    for (size_t i = 0; i < n; i++) {
        pair<string,string> x;
        cin >> x.first >> x.second;
        a.push_back(x);
    }

    cout << '[';

    for (auto i : a) {
        cout << "('" << i.first << "', '" << i.second << "')";
        if (n > 1) {
            cout << ", ";
            n--;
        }
    }
    cout << ']';
    
    
    
    return 0;
}
