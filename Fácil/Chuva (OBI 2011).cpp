#include <iostream>

using namespace std;


int main(){
	
	int x,n;
	cin >> n;
	int a[n][n];

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin >> x;
			a[i][j] += x;
		}
	}
	

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
