// While e Do-While são laços de respetição, ou seja, fazem com que o código se repita até que uma condição seja satisfeita, o while.
// A diferença entre eles é que o while verifica a condição antes de executar o código, enquanto o do-while executa o código e depois verifica a condição.
// Sempre se usa um contador, ordináriamente o i, para controlar o laço de repetição, mas ele pode sim ser outro nome, como j, k, ou até mesmo laço, como em for (int laco = 0; laco < 10; laco++) etc.

#include <stdio.h>

//Exemplo de While

void while_exemplo() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
}

void do_while_exemplo() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}

void diferenca_entre_while_e_do_while() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
    printf("====================================================\n");
    int j = 0;
    do {
        printf("%d\n", j);
        j++;
    } while (j < 10);
}

int main() {
    diferenca_entre_while_e_do_while();
}