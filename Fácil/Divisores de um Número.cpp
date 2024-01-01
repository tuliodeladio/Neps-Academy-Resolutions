#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int a,soma=1;
    cin >> a;
    vector<int> divisores;
    
    divisores.push_back(1);

    for (size_t i = 2; i <= a; i++)
    {
        if (a % i == 0) {
            divisores.push_back(i);
            soma+= i;
        }
    }

    cout << divisores.size() << " divisor(es): "; for(auto i : divisores) { cout << i << " ";};
    cout << endl << "Soma de divisores = " << soma << endl;
    if (divisores.size() > 2 or a == 1)
        cout << "Nao primo"; 
    else
        cout << "Primo";

    return 0;
    
    
}
