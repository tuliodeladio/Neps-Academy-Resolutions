#include <iostream>
#include <vector>

using namespace std;

int main(){
	
    vector<int> vetor1;
    vector<int> vetor2;

    for (size_t i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        if (a%2 == 0)
            vetor1.push_back(a);
        else
            vetor2.push_back(a);
    }

    for (int elemento : vetor1)
        cout << elemento << " ";

    cout << endl;
    
    for (int elemento : vetor2)
        cout << elemento << " ";

    return 0;
}
