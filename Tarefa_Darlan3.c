#include <stdio.h>

float temperatura_celsius, temperatura_fahrenheit;

void pegar_temperatura_celsius()
{
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);
}

void conversao_celsius_para_Fahrenheit()
{

    pegar_temperatura_celsius();

    temperatura_fahrenheit = (temperatura_celsius * 1.8) + 32;
    printf("A temperatura em Fahrenheit e: %.2f", temperatura_fahrenheit);

}

int main()
{

    conversao_celsius_para_Fahrenheit();

}