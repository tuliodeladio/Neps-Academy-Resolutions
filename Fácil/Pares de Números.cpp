#include <iostream>

using namespace std;

int main()
{
    int n,mi,ma,c = 0;
    cin >> n >> mi >> ma;
    int nu[n];
    
    for (auto& i : nu)
        cin >> i;

    
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            int soma = nu[i] + nu[j];
            if (soma <= ma and soma >= mi)
                c++;
        }
    }
    
    cout << c;
    
    return 0;
}
