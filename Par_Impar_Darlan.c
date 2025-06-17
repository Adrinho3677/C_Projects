#include <stdio.h>
#include <stdlib.h>

int numero;

void pegar_numero() {

    printf("Digite um numero: ");
    scanf("%d", &numero);

}

void verificar_numero() {

    pegar_numero();

    if (numero % 2 == 0) {
        printf("O numero %d e par.", numero);
    } else {
        printf("O número %d e impar.", numero);
    }

}

int main() {

    verificar_numero();
    
}