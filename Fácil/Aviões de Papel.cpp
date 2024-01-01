#include <iostream>


using namespace std;

int main(){
	int competidores,folhas_compradas, folhas_necessarias;
    cin >> competidores >> folhas_compradas >> folhas_necessarias;

    if ((competidores * folhas_necessarias) > folhas_compradas)
        cout << 'N';
    else
        cout << 'S';
    
    return 0;
}
