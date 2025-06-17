#include <stdio.h>
#include <math.h>

float x, y, z, opcao;

void tipo_raiz() {

    printf("Digite o valor de opcao:\n 1 para raiz quadrada\n 2 para raiz cubica\n 3 para raiz quarta\n 4 para raiz com base e grandeza da raiz: ");
    scanf("%f", &opcao);
}

void raiz_quadrada() {
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    y = sqrt(x);
    printf("A raiz quadrada de %f eh %f\n", x, y);
}

void raiz_cubica() {
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    y = cbrt(x);
    printf("A raiz cubica de %f eh %f\n", x, y);
}

void raiz_quarta() {
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    y = pow(x, 1.0/4.0); 
    printf("A raiz quarta de %f eh %f\n", x, y);
}

void raiz_base_grandeza() {
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    z = pow(x, 1.0/y);
    printf("A raiz com base %f e grandeza %f eh %f\n", x, y, z);
}

int main() {
    tipo_raiz();
    if (opcao == 1) {
        raiz_quadrada();
    } else if (opcao == 2) {
        raiz_cubica();
    } else if (opcao == 3) {
        raiz_quarta();
    } else if (opcao == 4) {
        raiz_base_grandeza();
    } else {
        printf("Opcao invalida!\n");
    }
    return 0;
}