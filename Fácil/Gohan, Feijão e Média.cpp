#include <iostream>

using namespace std;

int main(){

	int n,x;
    long double a=0,b=0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        a+=x;
        cin >>x;
        b+=x;
    }

    a = a/n;
    b = b/n;

    if (a < b)
        cout << ":0 <- Gohan e Feijao";
    else if (a > b)
        cout << ":0 <-X- Gohan e Feijao";
    else
        cout << "Impasse";
    


    return 0;
}
