#include <stdio.h>

int main() {
    // ================================
    // 1. Demonstração da precisão
    // ================================

    float numero_float = 3.141592653589793238f;
    double numero_double = 3.141592653589793238;

    printf("=== PRECISAO DE CADA TIPO ===\n");
    printf("Float (4 bytes):       %.7f\n", numero_float);
    printf("Double (8 bytes):      %.17lf\n", numero_double);

    // ================================
    // 2. Soma acumulativa
    // ================================

    float soma_f = 0.0f;
    double soma_d = 0.0;

    float incremento = 0.0001f;
    int vezes = 10000000; // 10 milhões

    for (int i = 0; i < vezes; i++) {
        soma_f += incremento;
        soma_d += incremento;
    }

    printf("=== SOMA DE 0.0001 REPETIDA %d VEZES ===\n", vezes);
    printf("Esperado:              %.10f\n", incremento * vezes);
    printf("Float:                 %.10f\n", soma_f);
    printf("Double:                %.10lf\n", soma_d);

    // ================================
    // 3. Tamanhos em memória
    // ================================

    printf("=== TAMANHO EM BYTES ===\n");
    printf("sizeof(float):         %lu bytes\n", sizeof(float));
    printf("sizeof(double):        %lu bytes\n", sizeof(double));

    return 0;
}
