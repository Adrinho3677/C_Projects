#include <stdio.h>

float salario_pessoal, salario_minimo, qtd_salarios_minimos;

void pegar_salario_pessoal()
{
    printf("Digite o seu salario: ");
    scanf("%f", &salario_pessoal);
}

void pegar_salario_minimo()
{
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_minimo);
}

void calcular_quantos_salarios_minimos()
{
    pegar_salario_pessoal();
    pegar_salario_minimo();
    
    qtd_salarios_minimos = salario_pessoal / salario_minimo;
    
    if (qtd_salarios_minimos < 1)
    {
        printf("Voce ganha menos que um salario minimo");
    } else if ( (int)qtd_salarios_minimos % 2 == 1 ) {
        printf("Voce ganha aproximadamente %.0f salarios minimos", qtd_salarios_minimos);
    } else {
        printf("Voce ganha %.0f salarios minimos", qtd_salarios_minimos);
    }
}

int main()
{
    calcular_quantos_salarios_minimos();
}