#include <iostream>
#include <iomanip>

using namespace std;

int par(int N) {
    return N/2;
}

int impar(int N) {
    return (3*N)+1;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n != 1)
    {
        if (n%2 == 0)
            n = par(n);
        else
            n = impar(n);

        count++;
    }

    cout << count;
    
    return 0;
}
