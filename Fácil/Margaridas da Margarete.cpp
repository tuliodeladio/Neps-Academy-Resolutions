#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n,x;
    cin >> n;

    unordered_map<int,int> a;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }

    cout << "Jovem: " << a[2] << endl;
    cout << "Adulta: " << a[1] << endl;
    cout << "Idosa: " << a[2] << endl;
    
    
    return 0;
}
