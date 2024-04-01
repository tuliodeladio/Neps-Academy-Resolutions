#include <iostream>

using namespace std;

int main() {
    int n,pc,ta=0;

    cin >> n >> pc;

    for (int i = 1; i < n; ++i) {
        int cc;
        cin >> cc;

        if (cc > pc) {
            ta += cc-pc;
            cc = pc;
        }

        pc = cc;
    }
    cout << ta << endl;



    return 0;
}
