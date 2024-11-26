#include <stdio.h>

int main() {
    int opcao;

    printf("Controle de Atuacao do Robo\n");
    printf("1 - Ligar Lampada\n");
    printf("2 - Tocar Som\n");
    printf("3 - Mover Braco\n");
    printf("0 - Encerrar\n");

    do {
        printf("Escolha uma acao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Lampada ligada.\n");
                break;
            case 2:
                printf("Som tocando.\n");
                break;
            case 3:
                printf("Braco se mexendo.\n");
                break;
            case 0:
                printf("Encerrando controle.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

