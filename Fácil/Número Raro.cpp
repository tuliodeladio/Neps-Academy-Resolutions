#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
    string a;
    cin >> a;

    if (a.length() == 1 and (a[0] == '1' or a[0] == '8' or a[0] == '0'))
        cout << "Sim";

    else if (
            (
                (a[0] == '9' and a[a.length()-1] == '6') 
                or 
                (a[0] == '6' and a[a.length()-1] == '9')
            )
            or 
            (
                (
                    a[0] == '1' 
                    or 
                    a[0] == '0' 
                    or 
                    a[0] == '8'
                )
                and
                a[0] == a[a.length()-1]
            )
        )
    {

        if (a.length() == 2)
            cout << "Sim";
        else if (a.length() == 3 and (a[1] == '1' or a[1] == '0' or a[1] == '8')) 
            cout << "Sim";
        else if (a.length() == 4 and (((a[1] == '1' or a[1] == '0' or a[1] == '8') and (a[1] == a[3])) or ((a[1] == '9' and a[2] == '6') or (a[1] == '6' and a[2] == '9')))) 
            cout << "Sim";
        else if ((a.length()-2) % 2 == 0) {
            
            char p1 = a[1],p2=a[a.length()/2];

            if ((p1 == '9' and p2 != '6') or (p1 == '6' and p2 != '9'))
            {
                cout << "Nao";
                return 0;
            }

            else if ((p1 != '1' or p1 != '0' or p1 != '8') or (p2 != '1' or p2 != '0' or p2 != '8'))

            {
                cout << "Nao";
                return 0;
            }



            if (p1 == '9')
                p2 == '6';
            else if (p1 == '6')
                p2 == '8';

            for (size_t i = 1; i < a.length()/2; i++)
            {
                if (a[i] != p1) {
                    cout << "Nao";
                    return 0;
                }
            }
            for (size_t i = a.length()/2; i < a.length()-1; i++)
            {
                if (a[i] != p2) {
                    cout << "Nao";
                    return 0;
                }
            }
            cout << "Sim";

        }
        else if ((a.length()-2) % 2 != 0) {
            char p1 = a[1];

            if ((p1 != '1' or p1 != '0' or p1 != '8'))
            {
                cout << "Nao";
                return 0;
            }

            for (size_t i = 1; i < a.length()-1; i++)
            {
                if (a[i] != p1) {
                    cout << "Nao";
                    return 0;
                }
            }
            cout << "Sim";

        }
        else
            cout << "Nao";
    }
    else
        cout << "Nao";



    return 0;

}
