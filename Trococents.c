#include <stdio.h>
int main()
{
int c100, c50, c25, c10, c5, valor;
printf("digite o valor em centavos para o seu troco: ");
scanf("%i", &valor);

c100 = valor / 100;
c50 = valor % 100 / 50;
c25 = valor % 100 % 50 / 25;
c10 = valor % 100 % 50 % 25 / 10;
c5 = valor % 100 % 50 % 25 % 10 / 5;

printf ("\n%i moedas de R$1,00", c100);
printf ("\n%i moedas de R$0,50", c50);
printf ("\n%i moedas de R$0,25", c25);
printf ("\n%i moedas de R$0,10", c10);
printf ("\n%i moedas de R$0,05", c5);
}