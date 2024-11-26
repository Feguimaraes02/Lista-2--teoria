#include <stdio.h>
#include <string.h>

int main() {

    char comando[10];

    printf("Controle de Movimento do Robô\n");
    printf("Comandos: frente, tras, esquerda, direita, sair\n");

    do {

        printf("Digite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            printf("Robo esta andando para frente\n");
        } else if (strcmp(comando, "tras") == 0) {
            printf("Robo esta andando para tras\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            printf("Robo esta andando para a esquerda\n");
        } else if (strcmp(comando, "direita") == 0) {
            printf("Robo esta andando para a direita\n");
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inválido.\n");
        }



    } while (strcmp(comando, "sair") != 0);

    printf("Controle encerrado.");
    return 0;
}

