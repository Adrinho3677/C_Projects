#include <stdio.h>

int n, opcao;

void fatorial(){
    int num, resultado = 1;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Fatorial nao existe para numeros negativos.\n");
        return;
    }
    
    for (int i = 1; i <= num; i++) {
        resultado = resultado * i;
    }
    printf("Fatorial de %d = %d\n", num, resultado);
}

void regressiva(){
    printf("Digite um numero para contagem regressiva: ");
    scanf("%d", &n);
    
    while (n >= 0){
        printf("%d\n", n);
        n--;
    }
}

void primo(){
    printf("Digite um numero para verificar se e primo: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("%d nao e primo.\n", n);
        return;
    }
    
    if (n == 2) {
        printf("%d e primo.\n", n);
        return;
    }
    
    int i = 2;
    int Primo = 1;
    
    do {
        if (n % i == 0){
            Primo = 0;
            break;
        }
        i++;
    } while (i <= n / 2);
    
    if (Primo) { // Se Primo for verdadeiro, ou seja Primo sozinho, o número é primo
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }
}


void menu(){
    printf("=========Menu=========\n");
    printf("1. Fatorial (For)\n");
    printf("2. Regressiva (While)\n");
    printf("3. Verificar numero primo (Do-While)\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        fatorial();
        menu();
    }
    else if (opcao == 2){
        regressiva();
        menu();
    }
    else if (opcao == 3){
        primo();
        menu();
    }
    else if (opcao == 0){
        printf("Saindo do programa...\n");
    }
    else{
        printf("Opcao invalida. Tente novamente.\n");
        menu();
    }
}

int main(){
    menu();
    return 0;
}
