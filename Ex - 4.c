#include <stdio.h>

int main() {
    float deposito;

    printf("Abertura de Conta\n");

    do {
        printf("Digite o valor do deposito inicial (minimo necessario para abrir a conta: R$ 500.00): ");
        scanf("%f", &deposito);

        if (deposito < 500.00) {
            printf("Erro: Valor insuficiente para abertura da conta.\n");
        }
    } while (deposito < 500.00);

    printf("Deposito concluido, conta aberta. \n");
    return 0;
}

