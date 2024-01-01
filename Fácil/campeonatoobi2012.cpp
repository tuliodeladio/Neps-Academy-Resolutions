#include<iostream>

using namespace std;

int main()
{
    int v1,e1,s1, v2,e2,s2;
    cin >> v1 >> e1 >> s1 >> v2 >> e2 >> s2;
    
    int a1 = (v1*3) + (e1*1), a2 = (v2*3) + (e2*1);
    
    if (a1 > a2)
        cout << 'C';
    else if (a1 < a2)
        cout << 'F';
    else {
        if (s1 > s2)
            cout << 'C';
        else if (s1 < s2)
            cout << 'F';
        else
            cout << '=';
    }
    
    return 0;
}
