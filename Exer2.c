#include <stdio.h>
int main()
{
    // Primeiro: criamos as variáveis dos km/h e m/s

    double kmh, ms;

    // Segundamente: perguntamos a velocidade em km/h

    printf("Vamos converter uma velocidade de km/h para m/s\n");
    printf("Insira o valor: ");
    scanf("%lf", &kmh);
    //Se a velocidade for menor do que 0 a pergunta repetira
    do
    {
        if (kmh < 0)
        {
            printf("Nao e possivel voltar para o passado. insira novamente o valor: ");
            scanf("%lf", &kmh);
        }
        
    } while (kmh < 0);
    

    // Terceiramente: fazemos a operação para o km/h vire m/s

    ms = kmh / 3.6;

    // Quartamente: mostramos o resultado

    printf("a conversao ficou %.2lf m/s\n", ms);

    return 0;
 }