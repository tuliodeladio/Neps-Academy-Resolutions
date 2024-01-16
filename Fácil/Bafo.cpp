#include <iostream>

using namespace std;

int main()
{
    int n,count=1;
    cin >> n;
    while (n != 0)
    {
        cout << "Teste " << count << endl;
        int A=0,B=0;
        for (size_t i = 0; i < n; i++)
        {
            int x,y;
            cin >> x >> y;
            A+=x;
			B+=y;
                
        }
        if(B > A)
            cout << "Beto" << endl;
        else
            cout << "Aldo" << endl;
        count++;
        cin >> n;
    }
    
    return 0;
}
