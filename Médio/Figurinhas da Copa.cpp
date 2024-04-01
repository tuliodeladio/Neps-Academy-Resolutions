#include <iostream>
#include <unordered_map>


using namespace std;


int main() {
    int n,a,b,k;
    cin >> n >> a >> b;

    n = a;

    unordered_map<int,int> x;



    for (size_t i = 0; i < a; i++) {
        cin >> k;
        x[k]++;
    }

    for (size_t i = 0; i < b; i++) {
        cin >> k;
        if (x[k] == 1) {
            n--;
            x[k] = NULL;
        }
    }

    cout << n;

    

    return 0;
}
