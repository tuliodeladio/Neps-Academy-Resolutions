#include <iostream>

using namespace std;

int main()
{
    int n, count = 1;

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        cout << "Teste " << count << endl;

        int ingressos[n];

        for (int i = 0; i < n; i++)
            cin >> ingressos[i];

        for (int i = 0; i < n; i++)
        {
            if (ingressos[i] == i+1)
            {
                cout << ingressos[i] << endl;
                break;
            }
        }

        count++;
        cout << endl;
    }

    return 0;
}
