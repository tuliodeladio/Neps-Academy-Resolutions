#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string S;
    cin >> S;
    a--,b--;

    reverse(S.begin()+a, S.begin()+b+1);

    cout << S;

    return 0;
}