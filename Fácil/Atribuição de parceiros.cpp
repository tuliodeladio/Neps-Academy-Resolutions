#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> x;

    int n;
    cin >> n;

    string a[n];
    string b[n];

    for (string& i : a)
        cin >> i;
    

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        x[a[i]] = b[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] or x[b[i]] != a[i]) {
            cout << "bad";
            return 0;
        }
    }

    cout << "good";

    return 0;
}
