#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    string x;

    for (int i = 0; i < n; ++i) {
        string linha;
        getline(cin, linha);
        x += linha;
    }

    
    stack<char> pilha;

    for (char c : x) {
        if (c == '{') {
            pilha.push(c);
        } 
        
        else if (c == '}') {
            if (pilha.empty() == true || pilha.top() != '{') {
                cout << 'N';
                return 0;
            }

            pilha.pop();

        }
    }
    
    if (pilha.size() != 0)
        cout << 'N';
    else
        cout << 'S';
        
    return 0;

}
