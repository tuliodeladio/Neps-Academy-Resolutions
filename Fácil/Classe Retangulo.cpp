#include <stdio.h>
#include <math.h>

class Retangulo {
    int x1, x2, y1, y2;

public:
    void set_pontos(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        return;
    }

    int area() {
        int Area = abs(x1 - x2) * abs(y1 - y2);
        return Area;
    }
};

int main() {
    Retangulo retangulo;
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        char operacao;

        scanf(" %c", &operacao);

        if (operacao == 'R') { // Redimensionar
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            retangulo.set_pontos(x1, y1, x2, y2);
        } else if (operacao == 'A') { // Imprimir a área
            printf("%d\n", retangulo.area());
        }
    }
    return 0;
}
