#include <stdio.h>
#include <stdlib.h>

void validaSexo(char* sexo) {
    while (*sexo != 'M' && *sexo != 'F') {
        printf("Sexo inv�lido. Digite M para masculino ou F para feminino: ");
        scanf(" %c", sexo);
    }
}

float validaSalario() {
    float salario;
    do {
        printf("Digite o sal�rio: R$ ");
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
    printf("Sal�rio: R$ %.2f\\n", salario);
    printf("Classifica��o: %s do sal�rio m�nimo\\n", (classificacao == 'A') ? "Abaixo" : (classificacao == 'I') ? "Igual" : "Acima");
    printf("\\n");
}

int main() {
    int n, abaixo = 0, acima = 0, i = 1;
    printf("Digite o n�mero de assalariados: ");
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

    printf("Assalariados abaixo do sal�rio m�nimo: %d\\n", abaixo);
    printf("Assalariados acima do sal�rio m�nimo: %d\\n", acima);

    return 0;
}


