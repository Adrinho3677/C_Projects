#include <stdio.h>

float numero1, numero2, numero3, numero4, numero5, media;

void pegar_cinco_numeros()
{
    printf("Escreva o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Escreva o segundo numero: ");
    scanf("%f", &numero2);
    printf("Escreva o terceiro numero: ");
    scanf("%f", &numero3);
    printf("Escreva o quarto numero: ");
    scanf("%f", &numero4);
    printf("Escreva o quinto numero: ");
    scanf("%f", &numero5);
}

void calcular_media()
{
    pegar_cinco_numeros();

    media = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;
    printf("A media dos numeros e: %.2f", media);
}

int main()
{

    calcular_media();

}