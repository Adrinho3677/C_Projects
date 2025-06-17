#include <stdio.h>

int operacao;
float numero1, numero2;

void  pegar_operacao() {
    printf("Digite uma operacao: \n1 - Soma \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao\n");
    scanf("%d", &operacao);
}

void pegar_numeros() {
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
}

void realizar_operacao() {
    pegar_operacao();
    if (operacao == 1) {
        printf("Resultado: %.2f\n", numero1 + numero2);
    } else if (operacao == 2) {
        printf("Resultado: %.2f\n", numero1 - numero2);
    } else if (operacao == 3) {
        printf("Resultado: %.2f\n", numero1 * numero2);
    } else if (operacao == 4) {
        printf("Resultado: %.2f\n", numero1 / numero2);
    } else {
        printf("Operacao invalida\n");
    }
}

int main() {
    pegar_numeros();
    realizar_operacao();
}