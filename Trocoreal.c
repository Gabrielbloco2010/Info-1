#include <stdio.h>
int main()
{
int cen100, cen50, cen25, cen10, cen05, troco;
double valor;
printf("digite um valor para ser convertido em troco em moedas: ");
scanf("%lf", &valor);

troco = valor * 100;
cen100 = troco / 100;
cen50 = troco % 100 / 50;
cen25 = troco % 100 % 50 / 25;
cen10 = troco % 100 % 50 % 25 / 10;
cen05 = troco % 100 % 50 % 25 % 10 / 5;

printf ("\n%i moedas de R$ 1,00", cen100);
printf ("\n%i moedas de R$ 0,50", cen50);
printf ("\n%i moedas de R$ 0,25", cen25);
printf ("\n%i moedas de R$ 0,10", cen10);
printf ("\n%i moedas de R$ 0,05", cen05);
}