#include<iostream>

using namespace std;

int main()
{
    bool ia,ib,fa,fb;
    cin >> ia >> ib >> fa >> fb;

    if (ia == fa and ib == fb)
        cout << 0;

    else if (ia != fa and ib != fb)
        cout << 1;

    else if (ia != fa and ib == fb)
        cout << 1;

    else
        cout << 2;

    
    return 0;
    

}
