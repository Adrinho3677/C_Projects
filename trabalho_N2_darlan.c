// A ideia do software é calcular o preço de uma compra de frutas, com base no código do item e na quantidade comprada.

// Biblioteca padrão de entrada e saída
#include <stdio.h> 

// Definição de constantes para os códigos dos itens
#define MACA_COD 1 
#define BANANA_COD 2
#define MORANGO_COD 3
#define UVA_COD 4

// Constantes para os preços dos itens
const float maca_preco = 1.50, banana_preco = 2.00, morango_preco = 2.50, uva_preco = 3.00;

// Variáveis para armazenar a opção do item, quantidade e nome de usuário
int opcao, quantidade;
float preco = 0;
char nome[50];

// Função para exibir o menu de opções
void exibir_menu()
{
    printf("\n========================================\n");
    printf("|   BEM-VINDO AO MERCADINHO DA FRUTA   |\n");
    printf("========================================\n");
    printf("|Escolha uma das frutas abaixo:        |\n");
    printf("|1 - Maca (R$ %.2f)                    |\n", maca_preco);
    printf("|2 - Banana (R$ %.2f)                  |\n", banana_preco);
    printf("|3 - Morango (R$ %.2f)                 |\n", morango_preco);
    printf("|4 - Uva (R$ %.2f)                     |\n", uva_preco);
    printf("========================================\n");
}

// Função para perguntar o nome
void perguntar_nome()
{
    // Pergunta o nome
    printf("Digite o nome: ");
    // Armazena o nome do usuário. Não se usa o & pois é uma string (vetor de caracteres e ponteiro), diferente de int, float, double, char, etc, os quais precisam de um ponteiro para armazenar o valor.
    scanf("%s", nome);
} 
   
// Função para perguntar o código do item
void perguntar_item()
{
    // Pergunta o código do item
    printf("Digite o codigo do item: ");
    // Armazena a opção do usuário
    scanf("%d", &opcao);
}

// Função para perguntar a quantidade
void perguntar_quantidade()
{
    // Pergunta a quantidade
    printf("Digite a quantidade: ");
    // Armazena a quantidade do usuário
    scanf("%d", &quantidade);
}

// Função para calcular o preço com base no código do item e na quantidade
void calcular_preco()
{
    // Calcula o preço com base no código do item e na quantidade
    switch (opcao)
    {
        // Caso seja a opção 1 (código da maçã)
        case MACA_COD:
            // Verifica se a quantidade com if e else if
            if (quantidade > 20) {
                preco = maca_preco * 0.75 * quantidade;
            } else if (quantidade > 10) {
                preco = maca_preco * 0.80 * quantidade;
            } else if (quantidade > 5) {
                preco = maca_preco * 0.85 * quantidade;
            } else {
                preco = maca_preco * quantidade;
            }
            break;

        // Caso seja a opção 2 (código da banana)
        case BANANA_COD:
            // Verifica se a quantidade com if e else if
            if (quantidade > 20) {
                preco = banana_preco * 0.75 * quantidade;
            } else if (quantidade > 10) {
                preco = banana_preco * 0.80 * quantidade;
            } else if (quantidade > 5) {
                preco = banana_preco * 0.85 * quantidade;
            } else {
                preco = banana_preco * quantidade;
            }
            break;

        // Caso seja a opção 3 (código do morango)
        case MORANGO_COD:
            // Verifica se a quantidade com if e else if
            if (quantidade > 20) {
                preco = morango_preco * 0.75 * quantidade;
            } else if (quantidade > 10) {
                preco = morango_preco * 0.80 * quantidade;
            } else if (quantidade > 5) {
                preco = morango_preco * 0.85 * quantidade;
            } else {
                preco = morango_preco * quantidade;
            }
            break;

        // Caso seja a opção 4 (código da uva)
        case UVA_COD:
            // Verifica se a quantidade com if e else if
            if (quantidade > 20) {
                preco = uva_preco * 0.75 * quantidade;
            } else if (quantidade > 10) {
                preco = uva_preco * 0.80 * quantidade;
            } else if (quantidade > 5) {
                preco = uva_preco * 0.85 * quantidade;
            } else {
                preco = uva_preco * quantidade;
            }
            break;

        // Caso seja uma opção inválida
        default:
            // Imprime uma mensagem de erro
            printf("Codigo invalido");
            preco = 0;
            return;
    }

    // Imprime o preço total
    printf("=================================================\n");
    printf("O usuario %s fez uma compra no valor de: R$ %.2f\n", nome, preco);
    printf("==================================================\n");
}

// Função principal
int main()
{
    // Chama a função para perguntar o nome do usuário
    perguntar_nome();

    // Loop principal do programa
    // Exibe o menu
    exibir_menu();

    // Chama as funções para perguntar o código do item e a quantidade
    perguntar_item();
    perguntar_quantidade();

    // Calcula e exibe o preço total
    calcular_preco();

    // Mensagem de despedida
    printf("Obrigado pela sua visita, %s!", nome);
    
    return 0;
}
