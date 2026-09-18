#include <stdio.h>
int main()
{
    double v1, v2, v3, final;
    printf("Vamos fazer a regra de tres\n");
    printf("escolha uma valor que seja = ao proximo\n");
    printf("valor 1 = ");
    scanf ("%lf", &v1);
    printf("valor 2 = ");
    scanf("%lf", &v2);
    printf("agora escolha um valor para calcularmos qual o proximo valor\n");
    printf("valor 3 = ");
    scanf("%lf", &v3);

    final = (v2 * v3) / v1; 

    printf("resultado = %.2lf", final);
}