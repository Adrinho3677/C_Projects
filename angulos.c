#include <stdio.h>

float angulo;
float voltas;

void receber_angulo() {
    printf("Digite o angulo: ");
    scanf("%f", &angulo);
}

void sentido_horario_ou_anti_horario() {
    if (angulo >= 0) {
        printf("O angulo está no sentido horário\n");
    } else if (angulo < 0) {
        printf("O angulo está no sentido anti-horário\n");
    } else {
        printf("O angulo está fora dos limites\n");
    }
}

void quantidade_voltas() {
    if (angulo < 0) {
        angulo = angulo * -1;
        voltas = angulo / 360;
        printf("A quantidade de voltas é: %.0f\n", voltas);
    } else {
        voltas = angulo / 360;
        printf("A quantidade de voltas é: %.0f\n", voltas);
    }
}

void quadrante() {

    if (angulo < 0) {
        
        if (angulo >= 0 && angulo < 90) {
            printf("O angulo está no primeiro quadrante\n");
        } else if (angulo >= 90 && angulo < 180) {
            printf("O angulo está no segundo quadrante\n");
        } else if (angulo >= 180 && angulo < 270) {
            printf("O angulo está no terceiro quadrante\n");
        } else if (angulo >= 270 && angulo < 360) {
            printf("O angulo está no quarto quadrante\n");
        } else {
            printf("O angulo está fora dos limites\n");
        }

    } else {
        
        if (angulo >= 0 && angulo < 90) {
            printf("O angulo está no primeiro quadrante\n");
        } else if (angulo >= 90 && angulo < 180) {
            printf("O angulo está no segundo quadrante\n");
        } else if (angulo >= 180 && angulo < 270) {
            printf("O angulo está no terceiro quadrante\n");
        } else if (angulo >= 270 && angulo < 360) {
            printf("O angulo está no quarto quadrante\n");
        } else {
            printf("O angulo está fora dos limites\n");
        }

    }

}

int main() {
    receber_angulo();
    quantidade_voltas();
    quadrante();
    sentido_horario_ou_anti_horario();
    return 0;
}