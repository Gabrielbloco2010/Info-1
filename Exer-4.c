#include <stdio.h>
int main()
{
    double raio, perimetro, area;
printf("Vamos descobrir a area e o raio pelo perimetro. digite o valor do perimetro: ");
scanf("%lf", &perimetro);

raio = perimetro / (3.14 * 2);
area = (raio * raio) * 3.14;

printf("sua raio = %.2lf e seu area = %.2lf", raio, area);
}