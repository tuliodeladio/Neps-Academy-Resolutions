#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    
    
    vector<char> chaveprimaria = {'{', '[', '('};

    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        bool vdd = true;
        stack<char> chaves;

        
        string palavra;
        cin >> palavra;
        
        for (char x : palavra)
        {
            if (find(chaveprimaria.begin(), chaveprimaria.end(), x) != chaveprimaria.end())
                chaves.push(x);

            else if ((chaves.empty() == false) and (chaves.top() == x-2 or chaves.top() == x-1))
                chaves.pop();

            else {
                vdd = false;
                break;
            }
        }
        if (vdd == true and chaves.empty() == true)
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }
    

    return 0;
}
