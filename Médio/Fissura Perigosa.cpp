#include <iostream>

using namespace std;


void rec(string s[], int n, int i, int j,char f) {

    for (size_t e = j+1; e < n; e++)
    {
        if (s[i][e] <= f and s[i][e] != '*') {
            s[i][e] = '*';
            rec(s,n,i,e,f);
        }
        else
            break;   
    }

    for (int d = j-1; d >= 0; d--)
    {
        if (s[i][d] <= f and s[i][d] != '*') {
            s[i][d] = '*';
            rec(s,n,i,d,f);
        }
        else
            break;
    }

    for (int c = i-1; c >= 0; c--)
    {
        if (s[c][j] <= f and s[c][j] != '*') {
            s[c][j] = '*';
            rec(s,n,c,j,f);
        }
        else
            break;
    }
    for (size_t b = i+1; b < n; b++)
    {
        if (s[b][j] <= f and s[b][j] != '*') {
            s[b][j] = '*';
            rec(s,n,b,j,f);
        }
        else
            break;
    }
}


int main()
{
    int n;
    char f;
    cin >> n >> f;

    string s[n];

    for (string& i : s)
        cin >> i;

    bool achado = false;

    if (s[0][0] <= f) {
        s[0][0] = '*';
        achado = true;
        rec(s,n,0,0,f);
    }
    
    for (string i : s) {
        cout << i << endl;
    }
    

    
    return 0;
}
