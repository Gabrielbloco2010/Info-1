#include <stdio.h>
int main()
{
int n1, n2;
printf("digite dois valor para decidirmos qual o menor:\n ");
scanf("%i %i", &n1, &n2);
if (n1 > n2)
{
    printf("o menor numero = %i", n2);
}else{
printf("o menor numero = %i", n1);
}

}