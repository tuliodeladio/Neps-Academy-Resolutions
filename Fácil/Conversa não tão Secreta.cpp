#include <iostream>

using namespace std;

int main()
{

    int n,m,x,y,q;
    cin >> n >> m;
    cin >> x >> y;
    cin >> q;

    int dx[] = { 0,  1, -1,  1, -1, 0,  1, -1,  0 };
    int dy[] = { 0,  1, -1, -1,  1, 1,  0,  0, -1 };



    int xx = 0,yy = 0,count=0;

    for (size_t j = 0; j < 9; j++)
        {
        if (xx == x+dx[j] and yy == y+dy[j]) {
            count++;
            break;
        }
    }


    for (size_t i = 0; i < q; i++)
    {
        int dir;
        cin >> dir;
        if (dir == 1)
            yy++;
        else if (dir == 2)
            yy--;
        else if (dir == 3)
            xx++;
        else if (dir == 4)
            xx--;

        for (size_t j = 0; j < 9; j++)
        {
            if (xx == x+dx[j] and yy == y+dy[j]) {
                count++;
                break;
            }
        }
    }

    cout << count;
    
    
    
    
    return 0;
}
