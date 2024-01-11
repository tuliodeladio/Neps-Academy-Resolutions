#include <stdio.h>

class Fracao{
    public:
        int numerador, denominador;

        Fracao(){}

        Fracao(int numerador, int denominador){
            this->numerador = numerador;
            this->denominador = denominador;
        }


        Fracao operator * (Fracao b){
            Fracao result(this->numerador*b.numerador,this->denominador*b.denominador);
            return result;
        }
        

        Fracao operator / (Fracao b){
            Fracao result(this->numerador*b.denominador,this->denominador*b.numerador);
            return result;

        }


};

int main(){
    Fracao a, b, c;
    char op;

    scanf("%d %d", &a.numerador, &a.denominador);
    scanf("%d %d", &b.numerador, &b.denominador);
    scanf(" %c", &op);

    if(op == 'M'){
        c = a * b;
    } else if(op == 'D'){
        c = a / b;
    }

    printf("%d %d", c.numerador, c.denominador);
}
