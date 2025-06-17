
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include <stdio.h>
#include <math.h>

int main()
{
    float valorA, valorB, valorC, delta, bhasptmais, bhasptmenos;
    printf ("Digite 3 valores que representarão “a”, “b” e “c”\nTais valores serão utilizados para a resolução de uma equação de grau 2: ");
    scanf ("%f""%f""%f", &valorA, &valorB, &valorC);
    delta = (pow(valorB, 2))-(4*valorA*valorC);
    if (valorA!=0) {
        if (valorB==0 && valorC==0) {
            printf ("Resultado é igual a 0");
            if (delta>0) {
                bhasptmais = (-valorB+pow(delta, 0.5))/(2*valorA);
				bhasptmenos = (-valorB-pow(delta, 0.5))/(2*valorA);
                printf ("O resultado de Delta é %.2f, logo haverá duas raizes reais, que seriam %.2f e %.2f", delta, bhasptmais, bhasptmenos);
            }
            else if (delta==0) {
                printf ("O resultado de Delta é %.2f, logo não haverá raízes reais", delta);
            }
            else if (delta<0) {
                printf ("O resultado de Delta é %.2f, logo não haverá raízes reais", delta);
            }
        }    
        
    }
    else {
        printf ("Caso “a” = 0, logo equação seria de grau 1");
    }
    return 0;
}
