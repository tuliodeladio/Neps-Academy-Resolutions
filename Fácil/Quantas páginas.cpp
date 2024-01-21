#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        long int a,b,c,d;
        string pp = " paginas.";

        cin >> a >> b >> c >> d;

        long int r = ceil((a*(b+c))/static_cast<double>(d));

        if (r == 1) {
            pp = " pagina.";
        }


        cout << "O livro contera " << r << pp << endl;
    }

    return 0;
}
