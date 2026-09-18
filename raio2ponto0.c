#include <stdio.h>
int main()
{
double raio, area, peri;
printf("digite o raio\n");
scanf("%lf", &raio);
if (raio <= 0)
{
    printf("ERROR\n");
    return 0;
}
area = 3.14 * (raio * raio);
peri = 2 * 3.14 * raio;

printf("sua area = %.2lf\n", area);
printf("seu perimetro = %.2lf\n\n\n\n\n", peri);
}