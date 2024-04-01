#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(5, 0);

    int max = 0;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < 5; j++) {
            char x;
            cin >> x;
            if (x == 'Y') {
                a[j]++;
                if (max < a[j])
                    max = a[j];
            }
        }
    }

    vector<int> k;

    for (size_t i = 0; i < 5; i++)
    {
        if (a[i] == max)
            k.push_back(i);
    }
    
    for (size_t i = 0; i < k.size(); i++) {
        cout << k[i];
        if (i != k.size() - 1) {
            cout << ',';
        }
    }
    

    return 0;
}
