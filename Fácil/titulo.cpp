#include <iostream>
#include <ctype.h>
using namespace std;

string title(string J){
    string F = J;
	for (int i = 0; F[i]; i++) {
        
        F[i] = tolower(F[i]);
        if (F[i-1] == ' ')
            F[i] = toupper(F[i]);
    }
    F[0] = toupper(F[0]);
    return F;

}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
