#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string a;
    cin >> a;

    for (size_t i = n; i > 1; i--)
    {
        int divisao = n-i+1;

        for (size_t j = 0; j < divisao; j++)
        {
            string cadeiaInversa = a.substr(j, i);
            string cadeia = cadeiaInversa;

            reverse(cadeiaInversa.begin(),cadeiaInversa.end());

            if (cadeiaInversa == cadeia) {
                cout << i;
                return 0;
            }
        }
        
    }
    
	cout << 1 << endl;
    return 0;
}
