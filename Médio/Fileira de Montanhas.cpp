#include <iostream>

using namespace std;

int main(){
    int n,m;
	cin >> n >> m;

	int montanhas[n];

	for (auto& i : montanhas) {
		cin >> i;
	}

	int max[n];

	for (size_t i = 0; i < n; i++)
	{
		max[i] = 0;
	}
	
	bool reiniciou = true;
	int seqatual = 0;

	for (size_t i = 0; i < n-1; i++)
	{
		int qtd = 1;

		if (reiniciou == false)
			qtd = max[seqatual];

		if (montanhas[i]+m >= montanhas[i+1]) {
			qtd++;
			max[seqatual] = qtd;
			reiniciou = false;
		}

		else {
			reiniciou = true;
			seqatual++;
		}
	}

	int maxin = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (max[i] > maxin)
			maxin = max[i];
	}
	
	cout << maxin;
	
}
