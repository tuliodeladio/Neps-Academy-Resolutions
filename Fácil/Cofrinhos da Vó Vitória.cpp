#include <iostream>

using namespace std;

int main()
{
    int n = -1,count=1; 

    while (0 == 0) {
        cin >> n;
        if (n == 0)
            return 0;
        cout << endl;

        cout << "Teste " << count << endl;

        int soma = 0;
        
        for (size_t i = 0; i < n; i++)
        {
            int a,b;
            cin >> a >> b;
            soma += (a-b);
            cout << soma << endl;
        }
        count++;
        
        
        
    }
    return 0;
}
