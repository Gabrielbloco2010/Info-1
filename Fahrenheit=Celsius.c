#include <stdio.h>
int main()
{
    double celsius, Fahrenheit;
printf("Vamos transformar Fahrenheit em Celsius. digite o valor do Fahrenheit: ");
scanf("%lf", &Fahrenheit);

celsius = (Fahrenheit - 32) / 1.8;

printf("O valor de celsius = %lf", celsius);
}