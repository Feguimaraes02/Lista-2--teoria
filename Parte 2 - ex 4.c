#include <stdio.h>

int main() {
    float bateria;

    printf("Monitoramento de Bateria do Robo\n");

    do {
        printf("Digite o nivel da bateria em porcentagem: ");
        scanf("%f", &bateria);

        if (bateria < 20.0) {
            printf("Bateria baixa! Nivel atual: %.2f%%\n", bateria);
        } else {
            printf("Bateria suficiente: %.2f%%\n", bateria);
        }

    } while (bateria < 20.0);

    printf("Bateria segura. Monitoramento encerrado.\n");
    return 0;
}

