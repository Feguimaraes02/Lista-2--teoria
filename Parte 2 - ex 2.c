#include <stdio.h>

int main() {
    float distancia;

    printf("Leitura de Sensores de Distancia\n");

    do {
        printf("Insira a distancia medida (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10.0) {
            printf("Distância crítica! Valor abaixo de 10 cm.\n");
            break;
        } else {
            printf("Distância segura: %.2f cm\n", distancia);
        }

        char continuar;
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            break;
        }

    } while (1);

    printf("Leitura encerrada.\n");
    return 0;
}

