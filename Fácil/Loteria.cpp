#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> a;
    int x;

    for (size_t i = 0; i < 12; i++)
    {
        cin >> x;
        a.insert(x);
    }

    int c = 12 - a.size();

    switch (c)
    {
    case 3:
        cout << "terno";
        break;

    case 4:
        cout << "quadra";
        break;

    case 5:
        cout << "quina";
        break;
    
    case 6:
        cout << "sena";
        break;
    
    default:
        cout << "azar";
        break;
    }
    
    

    return 0;
    
}
