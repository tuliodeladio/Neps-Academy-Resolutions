    #include <iostream>
    #include <cmath>
    #include <iomanip>
    #include <map>

    using namespace std;

    int main() {
        int N,A,B,C,D,E,F,G;
        cin >> N >> A >> B >> C >> D >> E >> F >> G;

        int apenasA = A - (E+D);
        int apenasB = B - (F+D);
        int apenasC = C - (F+E);
        int somatotal = apenasA+apenasB+apenasC+E+D+F+G;

        if ( somatotal != N)
            cout << 'S';
        else
            cout <<  'N';
        
        
        

        return 0;
    }
