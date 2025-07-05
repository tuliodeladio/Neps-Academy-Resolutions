#include <iostream>
#include <cmath>


using namespace std;

int main() {
    long n;
    cin >> n;

    long altura = (sqrtl(1+8*n)-1)/2;
    cout << altura;

    return 0;
}