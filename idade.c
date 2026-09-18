#include <stdio.h>
int main(){
int idade;
do
{
    printf("DIGITE SUA IDADE: ");
    scanf("%i", &idade);

    if (idade <= 0)
    {
        printf("IDADE INVALIDA\n");
    }
    

} while (idade <= 0);

if (idade < 12)
{
    printf("tu eres uma crinca");
}
else if (idade < 17)
{
    printf("tu eres um adolescente");
}
else if (idade < 60)
{
    printf("tu eres um adulto");
}
else{
printf("tu eres um idoso");
}
return 0;
}
