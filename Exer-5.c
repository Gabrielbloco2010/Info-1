#include <stdio.h>
int main()
{
int A, M, D, D2;
printf("diga para mim quanto tempo em dias voce tem: ");
scanf("%i", &D);

A = D / 365;
M = (D % 365) / 30;
D2 = (D % 365) % M;

printf("voce existe ha %i anos, %i meses e %i dias", A, M, D2);
}