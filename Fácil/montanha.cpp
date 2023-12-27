#include<iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin >> n;

    int montanha[n];

    for (int i = 0; i < n;i++)
        cin >> montanha[i];
    
    for (int i = 1; i < n-1;i++) {
        if (montanha[i-1] > montanha[i] && montanha[i+1] > montanha[i])
            count++;
    }
    
    cout << (count > 0 ? 'S' : 'N');

}
