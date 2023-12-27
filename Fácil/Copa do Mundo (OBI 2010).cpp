#include <iostream>
#include <string.h>
using namespace std;

int main()
{   
    int oitavas[8];
    int quartas[4];
    int final[2];
    int antf = 64;
    for (int i = 0; i < 8; i++) {
        int a,b;
        cin >> a >> b;
        if (a > b)
            oitavas[i] = antf+1;
        else
            oitavas[i] = antf+2;
        
        antf+=2;
    }


    antf = 0;
    for (int i = 0; i < 4; i++) {
        int a,b;
        cin >> a >> b;
        if (a > b)
            quartas[i] = oitavas[antf];
        else
            quartas[i] = oitavas[antf+1];
        antf+=2;
    }

    antf = 0;
    for (int i = 0; i < 2; i++) {
        int a,b;
        cin >> a >> b;
        if (a > b)
            final[i] = quartas[antf];
        else
            final[i] = quartas[antf+1];
        antf+=2;
    }

    int a,b;
    cin >> a >> b;
    if (a > b)
        printf("%c", final[0]);
    else
        printf("%c", final[1]);


    return 0;
}