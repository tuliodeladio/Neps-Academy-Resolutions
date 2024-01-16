#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    string a;
    unordered_set<char> b;

    cin >> n;
    cin >> a;

    for (char i : a)
        b.insert(i);
    
    if (b.size() > 2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
