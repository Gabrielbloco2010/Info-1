#include <stdio.h>
int main()
{
    double raio, perimetro;
// Vamos descobrir o perimetro do circulo
printf("Diga o raio do circulo: ");
scanf("%lf", &raio);

perimetro = raio * 2 * 3.14;

printf("O perimetro é de %lf", perimetro);
}