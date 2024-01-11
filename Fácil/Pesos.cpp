#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
    int n;
    cin >> n;
    vector<int> a;

    a.push_back(0);

    for (size_t i = 0; i < n; i++)
    {   
        int x;
        cin >> x;
        a.push_back(x);
    }
    

    sort(a.begin(),a.end(),greater<int>());

    for (size_t i = 0; i < n; i++)
    {
        int ai = a[i];
        int ai1 = a[i+1];
        if ((a[i] - a[i+1]) > 8 ) {
            cout << 'N';
            return 0;
        }
        
    }
    
    cout << 'S';

    return 0;
}
