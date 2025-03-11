#include <iostream>
#include <vector>
#include <map>

using namespace std;



int main() {

    map<string,map<string,bool>> nao;
    map<string,map<string,bool>> sim;


    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string x,y;
        cin >> x >> y;

        sim[x][y]=true;
    }

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string x,y;
        cin >> x >> y;

        nao[x][y]=true;
    }

    cin >> n;
    int violadas = 0;

    for (size_t i = 0; i < n; i++)
    {
        string nomes[3];
        cin >> nomes[0] >> nomes[1] >> nomes[2];

        bool sair = false;
        for (auto nomeAtual : nomes) {
            sair = false;

            for (auto nomeNaoPode : nomes) {
                if (nomeAtual != nomeNaoPode and nao[nomeAtual].size() != 0 and nao[nomeAtual][nomeNaoPode] == true) {
                    violadas++;
                    sair = true;
                    break;
                }
            }

            if (sair == true)
                break;
        }

        if (sair == false) {
            for (auto nomeAtual : nomes) {
                int teste = 0;
                auto pessoasPrecisamEstar = sim[nomeAtual];
                for (auto precisa : pessoasPrecisamEstar) {
                    for (auto nomePessoaTesteAtual : nomes) {
                        if (nomePessoaTesteAtual != nomeAtual and precisa.second == true and nomePessoaTesteAtual == precisa.first ) {
                            teste++;
                        }
                    }
                }
                if (teste != pessoasPrecisamEstar.size()) {
                    violadas++;
                    break;
                }
            }
        }
    }

    cout << violadas;
    
   
}
