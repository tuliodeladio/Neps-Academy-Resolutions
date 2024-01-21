#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int n;
    cin >> n >> a;

    string b = a.substr(0, a.length()/2);
    string c = a.substr(a.length()/2, a.length());

    if (b == c)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
