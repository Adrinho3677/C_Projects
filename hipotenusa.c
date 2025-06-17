#include <stdio.h> 
#include <math.h>

float cat1, cat2, hipotenusa;

void pegar_catetos() {
    printf("Digite o valor do cateto 1: ");
    scanf("%f", &cat1);
    printf("Digite o valor do cateto 2: ");
    scanf("%f", &cat2);
}

void calcular_hipotenusa() {
    pegar_catetos();
    hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));
    printf("A hipotenusa eh: %.2f\n", hipotenusa);
}

int main() {
    calcular_hipotenusa();
}
