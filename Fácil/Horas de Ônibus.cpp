#include <iostream>

using namespace std;

int main()
{
    int n;
    double a=0,h=0,d=0,m=0;
    cin >> n;

    int tm = 35*365*n*2;

    int anos = tm / (365 * 24 * 60);
    int mra = tm % (365 * 24 * 60);

    int dias = mra / (24 * 60);
    mra %= (24 * 60);

    int horas = mra / 60;
    int minutos = mra % 60;

    cout << anos << " ano(s), " << dias << " dia(s), " << horas << " hora(s) e " << minutos << " minuto(s)";

    


    return 0;
}
