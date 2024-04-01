#include <iostream>

using namespace std;

int main() {


    int a, b;
    cin >> a >> b;


    char m[a][b];


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cin >> m[i][j];
    }

    int costa = 0;

    for (int i = 0; i < a; i++) {

        for (int j = 0; j < b; j++) {

            if (m[i][j] == '#') {

                if (i == 0 or i == a - 1 or j == 0 or j == b - 1 or 
                    m[i + 1][j] == '.' or m[i - 1][j] == '.' or 
                    m[i][j + 1] == '.' or m[i][j - 1] == '.') {
                    costa++;
                }

            }
        }
    }

    cout << costa;

    return 0;
}
