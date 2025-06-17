#include <stdio.h>
#include <math.h>

float celsius, fahrenheit;

void pegar_temperatura() {
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
}

void converter_temperatura() {

    pegar_temperatura();

    fahrenheit = (celsius * (9/5)) + 32;
    printf("A temperatura em graus Fahrenheit eh: %.2f\n", fahrenheit);
}

int main() {

    converter_temperatura();

}