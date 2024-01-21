#include <iostream>

using namespace std;

int main()
{
    int f=0,t=0;
    string a;
    getline(cin,a);

    for (size_t i = 0; i < a.length()-2; i++)
    {
        if (a[i] == ':' and a[i+1] == '-') {
            if (a[i+2] == ')')
                f++;
            if (a[i+2] == '(')
                t++;
        }
    }

    if (f > t)
        cout << "happy";
    else if (f < t)
        cout << "sad";
    else if (f == t and f!=0)
        cout << "unsure";
    else
        cout << "none";
    


    return 0;
}
