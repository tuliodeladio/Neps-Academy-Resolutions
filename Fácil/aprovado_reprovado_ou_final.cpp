#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    n1 = ((n1*2) + (n2 *3))/5;

    if (n1 >= 7)
        cout << "Aprovado";
    else if (n1 < 3)
        cout << "Reprovado";
    else
        cout << "Final";

    

    return 0;
}
