#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char,int>b;
    int n;
    string a;
    cin >> n >> a;

    for (char i : a)
        b[i]++;
    
    for (size_t i = 0; i < b['J']; i++)
        cout << 'J';
    
    for (size_t i = 0; i < b['O']; i++)
        cout << 'O';

    for (size_t i = 0; i < b['I']; i++)
        cout << 'I';
    
    return 0;
}
