#include <iostream>
#include <unordered_set>

using namespace std;

int main() {


   int total_de_amigos;
   int reunioes;
   int pessoa_contaminada;
   int reuniao_da_contaminacao;

   unordered_set<int> pessoas_contaminadas;
   

    
    cin >> total_de_amigos >> reunioes >> pessoa_contaminada >> reuniao_da_contaminacao;

    pessoas_contaminadas.insert(pessoa_contaminada);

    for (size_t i = 1; i < reunioes+1; i++)
    {
        int pessoas_no_dia_N;
        cin >> pessoas_no_dia_N;

        int pessoas_no_dia[pessoas_no_dia_N];

        for (size_t j = 0; j < pessoas_no_dia_N; j++)
        {
            cin >> pessoas_no_dia[j];
        }


        bool alguma_pessoa_contaminada = false;
        
        if (i >= reuniao_da_contaminacao){
            for (size_t j = 0; j < pessoas_no_dia_N; j++)
            {
                if(pessoas_contaminadas.find(pessoas_no_dia[j]) != pessoas_contaminadas.end()){
                    alguma_pessoa_contaminada = true;
                    break;
                }
            }
        }

        if (alguma_pessoa_contaminada) {
            for (size_t j = 0; j < pessoas_no_dia_N; j++)
            {
                pessoas_contaminadas.insert(pessoas_no_dia[j]);
            }
        }
    }

    cout << pessoas_contaminadas.size();
    

    return 0;
}
