#include <stdio.h>

const float PI = 3.14;

float raio, area;

void pegar_raio()
{
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
}

void calcular_area()
{
    pegar_raio();

    area = PI * (raio * raio);
    printf("A area do circulo e: %.2f metros quadrados.", area);
}

int main()
{

    calcular_area();

}