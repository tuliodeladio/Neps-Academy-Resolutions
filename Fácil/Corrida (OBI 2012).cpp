#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[3];
	
    for (int& i : a)
        cin >> i;
    
    sort(a,a+3);

	if (a[0]+a[1] > a[2])
		cout << 'S';
	else
		cout << 'N';

    return 0;
}
