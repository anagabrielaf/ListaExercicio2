#include <stdio.h>

int main() {
    int numeroTimes, numeroJogadores, idade, peso, totalJovens = 0, totalPesados = 0;
    float mediaIdades, mediaPesos;

    printf("Digite o número de times (entre 3 e 9): ");
    scanf("%d", &numeroTimes);

    while (numeroTimes < 3 || numeroTimes > 9) {
        printf("Número de times inválido. Digite um número entre 3 e 9: ");
        scanf("%d", &numeroTimes);
    }

    int i = 1;
    do {
        printf("Time %d\n", i);
        printf("Digite o número de jogadores (entre 6 e 11): ");
        scanf("%d", &numeroJogadores);

        while (numeroJogadores < 6 || numeroJogadores > 11) {
            printf("Número de jogadores inválido. Digite um número entre 6 e 11: ");
            scanf("%d", &numeroJogadores);
        }

        int somaIdades = 0, numeroPesados = 0, numeroJovens = 0;
        int j = 1;
        do {
            printf("Jogador %d\n", j);
            printf("Digite a idade: ");
            scanf("%d", &idade);
            somaIdades += idade;

            printf("Digite o peso: ");
            scanf("%d", &peso);

            if (idade < 18) {
                totalJovens++;
                numeroJovens++;
            }

            if (peso > 80) {
                totalPesados++;
                numeroPesados++;
            }

            j++;
        } while (j <= numeroJogadores);

        mediaIdades = (float) somaIdades / numeroJogadores;
        printf("Média de idades: %.2f\n", mediaIdades);

        if (mediaIdades > 25) {
            mediaPesos = (float) totalPesados / numeroJogadores;
            printf("Média de pesos dos jogadores acima de 25 anos: %.2f\n", mediaPesos);
        } else {
            printf("Não há jogadores acima de 25 anos neste time.\n");
        }

        printf("\n");
        i++;
    } while (i <= numeroTimes);

    float porcentagemPesados = (float) totalPesados / (numeroTimes * numeroJogadores) * 100;
    printf("Quantidade de jogadores menores de idade: %d\n", totalJovens);
    printf("Quantidade de jogadores com mais de 80 quilos: %d\n", totalPesados);
    printf("Porcentagem de jogadores com mais de 80 quilos: %.2f%%\n", porcentagemPesados);

    return 0;
}

