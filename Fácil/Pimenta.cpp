#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> a;

    a["Poblano"] = 1500;
    a["Mirasol"] = 6000;
    a["Serrano"] = 15500;
    a["Cayenne"] = 40000;
    a["Thai"] = 75000;
    a["Habanero"] = 125000;

    int n,soma=0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        soma+=a[x];
    }

    cout << soma;
    
    
    
    return 0;
}
