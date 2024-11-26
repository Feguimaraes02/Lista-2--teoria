#include <stdio.h>

int main() {
    float temperatura;

    printf("Monitoramento de Temperatura\n");

    while (1) {
        printf("Insira a temperatura atual : ");
        scanf("%f", &temperatura);

        if (temperatura < 20.0 || temperatura > 25.0) {
            printf("Alerta! Temperatura fora da faixa segura (20 C - 25 C).\n");
        } else {
            printf("Temperatura dentro da faixa segura.\n");
        }
    }


    return 0;
}

