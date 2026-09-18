#include <stdio.h>

int main()
{
    double celsius, Fahrenheit;
printf("vamos transformar celsio em Fahrenheit. Digite o valor do celsius: ");
scanf("%lf", &celsius);

Fahrenheit = celsius * 1.8 + 32;

printf("sao %.2lf Fahrenheit.", Fahrenheit);
}