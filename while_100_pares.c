#include <stdio.h>

int i = 1, n;

void pedir_numeros(){
    printf("Digite um numero: ");
    scanf("%d", &n);
}

void verificar_par(){
    pedir_numeros();
    if(n % 2 == 0){
        printf("Numero %d e par.\n", n);
    } else {
        printf("Numero %d e impar.\n", n);
    }
}

int main(){
    while(i <= 10){

        verificar_par();
        i += 1;
    }
    return 0;
}