#include <stdio.h>

int main() {
    int passos = 0, totalpassos = 0;

    printf("Contagem de Passos\n");
    printf("Sua meta diria e de 10000 passos\n");

    while (totalpassos < 10000) {
        printf("Digite a quantidade de passos dados: ");
        scanf("%d", &passos);
        totalpassos += passos;

        printf("Total de passos ate agora: %d\n", totalpassos);
    }

    printf("Parabens! Meta de 10.000 passos atingida.\n");
    return 0;
}

