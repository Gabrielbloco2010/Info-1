#include <stdio.h>

int main()
{
    int trabalhos, nota;
    double media, soma;
    soma = 0;
printf("Vamos descobrir sua media da escola, nos diga quantos trabalhos teve: ");
scanf("%i", &trabalhos);

for (int totaltrabalhos = 1; totaltrabalhos <= trabalhos; totaltrabalhos++)
{
    printf("Digite o valor do trabalho %i:", totaltrabalhos);
    scanf("%i", &nota);
    soma = soma + nota;
    media = soma / trabalhos;
}
printf("sua nota final = %lf", media);
}