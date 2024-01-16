#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p, r;
    cin >> p >> r;

    vector<int> relacionamentos(p + 1, 0);

    for (int i = 0; i < r; ++i) {
        int x, y;
        cin >> x >> y;
        relacionamentos[x]++;
        relacionamentos[y]++;
    }

    int rf = 0;
    for (int i = 1; i <= p; ++i) {
        int re = relacionamentos[i];
        int rn = p-1-re;
        rf += rn;
    }
    
    cout << rf / 2 << endl;

    return 0;
}
