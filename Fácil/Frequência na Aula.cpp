#include <iostream>
#include <unordered_set>

using namespace std;


int main() {
    int n;
    cin >> n;

    int aluno[n];

    for(int i = 0; i < n; i++)
        cin >> aluno[i];

    unordered_set<int> alunoslistaunica;
    
    for(int i = 0; i < n; i++)
        alunoslistaunica.insert(aluno[i]);

    cout << alunoslistaunica.size() << endl;

    return 0;
}
