#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
int N, melhorVolta = 0, i = 0;
float volta, tempoInteiro = 0, melhorTempo = 1000000;

printf("Informe o número de voltas: ");
scanf("%d", &N);

do {
    scanf("%f", &volta);
    tempoInteiro += volta;
    i++;
    if (volta < melhorTempo) {
        melhorTempo = volta;
        melhorVolta = i;
    }
} while (i < N);

printf("Melhor tempo: %.2f na volta %d\\n", melhorTempo, melhorVolta);
printf("Tempo médio por voltas: %.2f s\\n", tempoInteiro / N);


return 0;
}
