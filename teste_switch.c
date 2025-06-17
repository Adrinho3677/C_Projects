#include <stdio.h>

int x;

void pegar_numero() {
    printf("Digite um numero: ");
    scanf("%d", &x);
}

void realizar_operacao() {
    switch (x) {
        case 1:
            printf("O numero e 1\n");
            break;
        case 2:
            printf("O numero e 2\n");
            break;
        case 3:
            printf("O numero e 3\n");
            break;
        case 4:
            printf("O numero e 4\n");
            break;
        case 5:
            printf("O numero e 5\n");
            break;
        default:
            printf("O numero e maior que 5\n");
            break;
    }
}

int main() {
    pegar_numero();
    realizar_operacao();
}