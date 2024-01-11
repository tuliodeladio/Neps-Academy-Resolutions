#include <iostream>
#include <string>

using namespace std;


int main(){
	int n,m,s;
	cin >> n >> m >> s;

	for (size_t i = m; i >= n; i--)
	{
		string x = to_string(i);
		int soma = 0;
		for (char j : x) {
			soma+= j-'0';
		}
		if (soma == s) {
			cout << i;
			return 0;
		}
		
	}
	


	cout << -1;
	return 0;
	
}
