#include <stdio.h>
#include <string.h>


void controleMovimento();
void leituraSensores();
void controleAtuacao();
void monitoramentoBateria();
void navegacaoAutonoma();

int main() {
    int opcao;

    do {

        printf("\nMenu Principal - Controle Completo do Robo\n");
        printf("1 - Controle de Movimento\n");
        printf("2 - Leitura de Sensores\n");
        printf("3 - Controle de Atuacao\n");
        printf("4 - Monitoramento de Bateria\n");
        printf("5 - Navegacao Autonoma\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                controleMovimento();
                break;
            case 2:
                leituraSensores();
                break;
            case 3:
                controleAtuacao();
                break;
            case 4:
                monitoramentoBateria();
                break;
            case 5:
                navegacaoAutonoma();
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}



void controleMovimento() {
    int x = 0, y = 0;
    char comando[10];

    printf("\nControle de Movimento do Robo\n");
    printf("Comandos: frente, tras, esquerda, direita, sair\n");

    do {
        printf("Posicao atual: (%d, %d)\n", x, y);
        printf("Digite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            y++;
        } else if (strcmp(comando, "tras") == 0) {
            y--;
        } else if (strcmp(comando, "esquerda") == 0) {
            x--;
        } else if (strcmp(comando, "direita") == 0) {
            x++;
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inválido.\n");
        }


        if (x < 0) x = 0;
        if (x > 9) x = 9;
        if (y < 0) y = 0;
        if (y > 9) y = 9;

    } while (strcmp(comando, "sair") != 0);

    printf("Controle de movimento encerrado.\n");
}

void leituraSensores() {
    float distancia;

    printf("\nLeitura de Sensores de Distancia\n");

    do {
        printf("Digite a distancia medida (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10.0) {
            printf("Distancia critica! Valor abaixo de 10 cm.\n");
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

    printf("Leitura de sensores encerrada.\n");
}

void controleAtuacao() {
    int opcao;

    printf("\nControle de Atuacao do Robo\n");
    printf("1 - Ligar Laampada\n");
    printf("2 - Tocar Som\n");
    printf("3 - Mover Braco\n");
    printf("0 - Voltar ao Menu Principal\n");

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
                printf("Braço se mexendo.\n");
                break;
            case 0:
                printf("Retornando ao menu principal...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
}

void monitoramentoBateria() {
    float bateria;

    printf("\nMonitoramento de Bateria do Robo\n");

    do {
        printf("Digite o nivel da bateria (em %%): ");
        scanf("%f", &bateria);

        if (bateria < 20.0) {
            printf("Bateria baixa! Nível atual: %.2f%%\n", bateria);
        } else {
            printf("Bateria suficiente: %.2f%%\n", bateria);
        }

    } while (bateria < 20.0);

    printf("Bateria segura. Monitoramento encerrado.\n");
}

void navegacaoAutonoma() {
    int x = 2, y = 2;
    char comando[10];

    printf("\nNavegacao Autonoma do Robo\n");
    printf("Comandos: cima, baixo, esquerda, direita, parar\n");

    do {
        printf("Posicao atual: (%d, %d)\n", x, y);
        printf("Digite o comando: ");
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

    printf("Navegacao autonoma encerrada.\n");
}

