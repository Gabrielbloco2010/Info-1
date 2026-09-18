#include <stdio.h>
int main()
{
    int idade, dias;
// Vamos descobrir quantos dias você existe no planeta Terra
printf("Coloque sua idade atual: ");
scanf("%i", &idade);

dias = idade * 365;

printf("Voce existe ha %i Dias", dias);
}