#include <stdio.h>

float preco_maca = 0.30;
int quantidade;

void pegar_quantidade() {
    printf("Digite a quantidade de macas: ");
    scanf("%d", &quantidade);
}

void calcular_preco() {
    if (quantidade < 12) {
        printf("Preco: %.2f\n", quantidade * preco_maca);
    } else if (quantidade == 12) {
        preco_maca = 0.28;
        printf("Preco: %.2f\n", quantidade * preco_maca);
    } else if (quantidade > 12) {
        preco_maca = 0.26;
        printf("Preco: %.2f\n", quantidade * preco_maca);
    }
}

int main() {
    pegar_quantidade();
    calcular_preco();
}