#include <iostream>

using namespace std;

int main(){
    unsigned long int a,b;
	cin >> a >> b;
	cout << ((a-(b-1))*(a-(b-1)))+(b-1);

    return 0;
}
