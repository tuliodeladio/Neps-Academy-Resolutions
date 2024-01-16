#include <stdio.h>

class Horario {
public:
    int horas, minutos, segundos;

    Horario() {}

    Horario(int horas, int minutos, int segundos) {
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    Horario operator+(Horario b) {
        int s = this->segundos + b.segundos;
        int m = this->minutos + b.minutos;
        int h = this->horas + b.horas;

        if (s >= 60) {
            m += s / 60;
            s = s % 60;
        }

        if (m >= 60) {
            h += m / 60;
            m = m % 60;
        }

        if (h >= 24) {
            h = h % 24;
        }

        return Horario(h, m, s);
    }

    Horario operator-(Horario b) {
        int s = this->segundos - b.segundos;
        int m = this->minutos - b.minutos;
        int h = this->horas - b.horas;

        if (s < 0) {
            m -= 1;
            s += 60;
        }

        if (m < 0) {
            h -= 1;
            m += 60;
        }

        if (h < 0)
            h += 24;
        

        return Horario(h, m, s);
    }
};

int main() {
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if (op == 'A') {
        c = a + b;
    } else if (op == 'S') {
        c = a - b;
    }

    c.horas = (c.horas == 24) ? 0 : c.horas;

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);

    return 0;
}
