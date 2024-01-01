#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int n;
	cin >> n;
	
	if (n == 0)
	    cout << 0;
	else {
    	string binario = bitset<32>(n).to_string();
        binario = binario.substr(binario.find('1'));
        cout << binario;
	}
    return 0;
}
