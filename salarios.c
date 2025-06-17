#include <stdio.h>

int codigo;
float novo_salario;

void pegar_codigo() {
    printf("Digite um codigo: ");
    scanf("%d", &codigo);
}

void ajustar_salario() {
    pegar_codigo();
    if (codigo == 111) {
        novo_salario = 2500.32 + (2500.32 * 15/100);
        printf("Novo salario do operario: %.2f\n", novo_salario);
    } else if (codigo == 122) {
        novo_salario = 4670 + (4670 * 13.5/100);
        printf("Novo salario do analista: %.2f\n", novo_salario);
    } else if (codigo == 133) {
        novo_salario = 7900.91 + (7900.91 * 14/100);
        printf("Novo salario: %.2f\n", novo_salario);
    } else if (codigo != 111 || codigo != 122 || codigo != 133) {
        printf("Codigo nao encontrado\n");
    }
}

int main() {
    ajustar_salario();
}