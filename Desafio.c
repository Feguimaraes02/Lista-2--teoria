#include <stdio.h>
#include <math.h>

int main() {
    int dias;
    float soma = 0, media, desvio = 0;

    printf("Analise de Desempenho de Acoes\n");
    printf("Quantos dias deseja analisar? ");
    scanf("%d", &dias);

    float precos[dias];

    for (int i = 0; i < dias; i++) {
        printf("Digite o preço da acao no dia %d: ", i + 1);
        scanf("%f", &precos[i]);
        soma += precos[i];
    }

    media = soma / dias;

    for (int i = 0; i < dias; i++) {
        desvio += pow(precos[i] - media, 2);
    }
    desvio = sqrt(desvio / dias);

    printf("Media dos precos: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);

    if (desvio < 5.0) {
        printf("As acoes sao estaveis, baixo risco.\n");
    } else {
        printf("As acoes sao volateis, alto risco.\n");
    }

    return 0;
}

