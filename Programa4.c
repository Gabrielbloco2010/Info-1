#include <stdio.h>
int main()
{
    int tamanho, area, perimetro;
// vamos descobrir a area e o perimetro de um quadrado perfeito
printf("digite o tamanho do quadrado: ");
scanf("%i", &tamanho);

area = tamanho * tamanho;
perimetro = tamanho * 4;

printf("Area = %i   perimetro = %i", area, perimetro);
}