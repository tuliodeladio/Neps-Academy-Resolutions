#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n,soma=0,x1,y1,x2,y2;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
            soma+= pow((x2-x1),2)+pow((y2-y1),2);
    }

    cout << soma;

    
    return 0;
}
