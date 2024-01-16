#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2,count=1;
    cin >> x1 >> y1 >> x2 >> y2;


    while (x1 != 0 and x2 != 0 and y1 != 0 and y2 != 0)
    {
        int n,meteoritos=0;
        cin >> n;

        cout << "Teste " << count << endl;

        for (size_t i = 0; i < n; i++)
        {
            int x,y;
            cin >> x >> y;

            if (x >= x1 and x <= x2 and y >= y2 and y <= y1)
                meteoritos++;
        }

        cout << meteoritos << endl;
        count++;
        
        cin >> x1 >> y1 >> x2 >> y2;
    }
    
    return 0;
}
