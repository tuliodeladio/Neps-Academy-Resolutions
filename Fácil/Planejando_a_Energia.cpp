#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double a1,a2,c1,c2;
    cin >> n;
    double r[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> c1 >> a2 >> c2;
        r[i] = ((c2-c1)/(a2-a1));
    }

    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(2) << r[i] << endl;
    

    return 0;
}
