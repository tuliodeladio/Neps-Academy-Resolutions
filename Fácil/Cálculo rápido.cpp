#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    int s,a,b,count1 = 0;
    cin >> s >> a >> b;

    for (int i = a; i <= b; i++)
    {
        string c = to_string(i);
        int count2 = 0;
        for (char i : c)
        {
            int x = i - '0';
                count2+= x;
        }
        if (count2 == s)
        {
            count1++;
        }
        
    }

    cout << count1;
    

    return 0;

}
