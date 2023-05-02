#include <stdio.h>
#include <stdlib.h>

void validaSexo(char* sexo) {
    while (*sexo != 'M' && *sexo != 'F') {
        printf("Sexo inválido. Digite M para masculino ou F para feminino: ");
        scanf(" %c", sexo);
    }
}

float validaSalario() {
    float salario;
    do {
        printf("Digite o salário: R$ ");
        scanf("%f", &salario);
    } while (salario <= 1);
    return salario;
}

void classificaSalario(float salario, char* classificacao) {
    if (salario < 1400) {
        *classificacao = 'A';
    } else if (salario == 1400) {
        *classificacao = 'I';
    } else {
        *classificacao = 'B';
    }
}

void mostraClassificacao(char sexo, float salario, char classificacao) {
    printf("Sexo: %s\\n", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\\n", salario);
    printf("Classificação: %s do salário mínimo\\n", (classificacao == 'A') ? "Abaixo" : (classificacao == 'I') ? "Igual" : "Acima");
    printf("\\n");
}

int main() {
    int n, abaixo = 0, acima = 0, i = 1;
    printf("Digite o número de assalariados: ");
    scanf("%d", &n);

    while (i <= n) {
        char sexo, classificacao;
        float salario;

        printf("Assalariado %d\\n", i);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        validaSexo(&sexo);

        salario = validaSalario();

        classificaSalario(salario, &classificacao);

        mostraClassificacao(sexo, salario, classificacao);

        if (classificacao == 'A') {
            abaixo++;
        } else if (classificacao == 'B') {
            acima++;
        }

        i++;
    }

    printf("Assalariados abaixo do salário mínimo: %d\\n", abaixo);
    printf("Assalariados acima do salário mínimo: %d\\n", acima);

    return 0;
}


