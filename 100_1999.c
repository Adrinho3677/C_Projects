#include <stdio.h>

int n = 1000;

int main() {
    do {

        if (n % 11 == 5) {
            printf("%d\n", n);
        }
        n++;
    } while (n <= 1999);

}