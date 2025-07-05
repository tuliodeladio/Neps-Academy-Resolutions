#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;


int main() {
    
    int n;
    cin >> n;

    unordered_set<string> contas;

    for (size_t i = 0; i < n; i++)
    {
        string x,y;
        cin >> x;

        bool aposA = false;
        bool aposP = false;

        for (char atual : x) {
            if (atual == '@') {
                aposA = true;
                aposP = false;
            }

            else if (atual == '+' and aposA == false)
                aposP = true;
            
            else if (aposA == true)
                y+=atual;

            else if (atual != '.' and aposP == false)
                y+=atual;
        }

        contas.insert(y);


    }
    
    cout << contas.size();

    return 0;
    
    
}
