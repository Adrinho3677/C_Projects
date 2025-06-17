#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opcao;
float num1, num2, resultado;

void menu()
{
    printf("Escolha uma opção: ");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Raiz qualquer\n");
    scanf("%d", &opcao);
}

void soma()
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = num1 + num2;
    printf("Resultado: %.2f\n", resultado);
}

void subtracao()
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = num1 - num2;
    printf("Resultado: %.2f\n", resultado);
}

void multiplicacao()
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = num1 * num2;
    printf("%f\n", resultado);
    printf("Resultado: %.2f\n", resultado);
}

void divisao()
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = num1 / num2;
    printf("Resultado: %.2f\n", resultado);
}

void raiz_qualquer()
{
    printf("Digite o número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = pow(num1, 1.0 / num2);
    printf("Resultado: %.2f\n", resultado);
}

int main()
{
    menu();
    switch (opcao)
    {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
        case 5:
            raiz_qualquer();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}