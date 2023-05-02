#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float salarioBase = 600.0, adicional = 0.0;
    int numPecas;

    printf("Informe o n�mero de pe�as fabricadas: ");
    scanf("%d", &numPecas);

    if (numPecas > 80) {
        adicional = 0.75 * (numPecas - 80) + 0.50 * (80 - 50);
    } else if (numPecas > 50) {
        adicional = 0.50 * (numPecas - 50);
    }

    printf("Sal�rio total: R$ %.2f\\n", salarioBase + adicional);

    return 0;
}


