#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_set<int> estoque;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int comprimento;
        cin >> comprimento;


        auto bb = estoque.find(comprimento);

        if (bb != estoque.end())
            estoque.erase(bb);
            
        else {
            estoque.insert(comprimento);
            count += 2;
        }
    }

    cout << count << endl;

    return 0;
}
