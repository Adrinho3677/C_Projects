#include <stdio.h>

int x;

void pegar_numero() {
    printf("Digite o numero: ");
    scanf("%d", &x);
}

void verificar_multiplo() {
    pegar_numero();
    if (x % 5 == 0 ) {
        printf("O numero eh multiplo de 5\n");
    } else {
        printf("O numero nao eh multiplo de 5\n");
    }
}

int main() {
    verificar_multiplo();
}