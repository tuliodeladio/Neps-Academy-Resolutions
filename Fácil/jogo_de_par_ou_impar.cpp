#include <iostream>

using namespace std;

int main(){
	int p,d1,d2;
    cin >> p >> d1 >> d2;
	
	d1 = d1+d2;
	
	if (d1 % 2 == 0) {
		if (p == 0)
			cout << 0;
		else
			cout << 1;
	}
	else {
		if (p == 0)
			cout << 1;
		else
			cout << 0;
	}

    return 0;
}
