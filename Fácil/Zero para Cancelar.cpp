#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a,soma = 0;
    cin >> n;
    vector<int> nu;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a != 0)
            nu.push_back(a);
        else
            nu.pop_back();
    }

    for (auto i : nu)
        soma+= i;

    cout << soma;
    

    return 0;
}
