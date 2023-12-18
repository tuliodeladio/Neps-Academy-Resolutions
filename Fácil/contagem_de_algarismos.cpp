#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string an;
    char comparar[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int contagem[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < n; i++) {
        cin >> an;
        for (int j = 0; j < an.length(); j++)
        {
            for (int k = 0; k < 10; k++) {
                if (an[j] == comparar[k])
                    contagem[k]++;         
            }
        }
    }

    for (int i = 0; i < 10; i++)
        cout << i << " - " << contagem[i];
   
	return 0;
    
}
