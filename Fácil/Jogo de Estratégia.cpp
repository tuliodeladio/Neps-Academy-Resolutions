    #include <iostream>

    using namespace std;

    int main()
    {
        int n,m;
        cin >> n >> m;

        int a[n];

        for (int& i : a)
            i = 0;

        for (size_t i = 0; i < m; i++)
        {
            for (int& i : a) {
                int x;
                cin >> x;
                i+=x;
            }
        }

        int max = -1,pos=1;
        
        for (size_t i = 0; i < n; i++)
        {
            if (a[i] >= max){
                max = a[i];
                pos = i;
            }
        }

        cout << pos+1;

        return 0;
    }
