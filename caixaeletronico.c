#include <stdio.h>
int main(){
int valor;
printf("Quanto voce quer sacar? ");
scanf("%i", &valor);

if (valor < 10)
{
    printf("valor muito baixo");
}
else if (valor < 49)
{
    printf("celulas de R$ 10");
}
else if (valor < 99)
{
    printf("celulas de R$ 50");
}
else if (valor < 499)
{
    printf("cedulas de R$ 100");
}
else if (valor > 500)
{
    printf("cedulas de R$ 500");
}

}