#include <iostream>

using namespace std;

int main()
{
    int n,count = 1;
    cin >> n;

    while(n != 0) {
        cout << "Teste " << count << endl;
        

        int a = n/50;
        cout << a << ' ';

        int b = ((n%50)/10);
        cout << b << ' ';


        int c = ((n%50)%10)/5;
        cout << c << ' ';

        int d = ((n%50)%10)%5;
        cout << d << ' ' << endl << endl;
        count++;
        cin >> n;
    }
    
    
    return 0;
}
