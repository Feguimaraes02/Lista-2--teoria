#include <stdio.h>

int main() {
    float combustivel;

    printf("Monitoramento de Combustivel\n");

    do {
        printf("Digite o nivel de combustivel em porcentagem: ");
        scanf("%f", &combustivel);

        if (combustivel < 15.0) {
            printf("Alerta! Combustível baixo. Recarregue o veículo.\n");
        } else if (combustivel < 100.0) {
            printf("Nível de combustível adequado.\n");
        }

    } while (combustivel < 100.0);

    printf("Combustivel cheio!.\n");
    return 0;
}

