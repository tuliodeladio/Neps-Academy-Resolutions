    #include <iostream>
    #include <cmath>
    #include <iomanip>
    #include <map>

    using namespace std;

    int main() {
        int andaresN,eventosN;
        cin >> andaresN >> eventosN;

        map<int,int> andares;

        for (size_t i = 1; i <= andaresN; i++)
        {
            int x;
            cin >> x;
            andares.insert({i,x});        
        }

        for (size_t i = 0; i < eventosN; i++)
        {
            int andar,acao;
            cin >> acao >> andar;

            if (acao == 0) {
                int pessoas;
                cin >> pessoas;
                andares[andar] = pessoas;
            }
            else if (acao == 1) {
                int somatorio = 0;
                for (size_t k = 1; k <= andar; k++)
                {
                    somatorio += andares[k];
                }
                
                cout << somatorio << endl;
            }
        }
        
        

        return 0;
    }
