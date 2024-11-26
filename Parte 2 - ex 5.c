#include <stdio.h>
#include <string.h>

int main() {
    int x = 2, y = 2;
    char comando[10];

    printf("Simulacao de Navegacao Autonoma\n");
    printf("Comandos: cima, baixo, esquerda, direita, parar\n");

    do {
        printf("Posicao atual: (%d, %d)\n", x, y);
        printf("Insira o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            y--;
        } else if (strcmp(comando, "baixo") == 0) {
            y++;
        } else if (strcmp(comando, "esquerda") == 0) {
            x--;
        } else if (strcmp(comando, "direita") == 0) {
            x++;
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando invalido.\n");
        }


        if (x < 0 || x > 4 || y < 0 || y > 4) {
            printf("Erro: O robo tentou sair do grid!\n");
            break;
        }

    } while (strcmp(comando, "parar") != 0);

    printf("Simulacao encerrada. Posicao final: (%d, %d)\n", x, y);
    return 0;
}

