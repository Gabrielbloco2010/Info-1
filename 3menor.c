#include <stdio.h>
int main(){
int n1, n2, n3;
printf("digite 3 valores para descobrirmos o menor:\n");
scanf("%i %i %i", &n1, &n2, &n3);
if (n1 < n2 && n1 < n3)
{
    printf("menor nota = %i", n1);
}
else if (n2 < n1 && n2 < n3)
{
    printf("menor nota = %i", n2);
}
else if (n3 < n2 && n3 < n1)
{
    printf("menor nota = %i", n3);
}
}