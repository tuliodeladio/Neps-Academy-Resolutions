#include <iostream>

using namespace std;

int main()
{
    unsigned int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((n%i) == 0)
            count++;
    }

    if (count == 2)
        cout << 'S';
    else
        cout << 'N';
    return 0;
}
