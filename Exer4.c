#include <stdio.h>
int main()
{
    //Criamos as variáveis
    int segundos, minutos, horas, segundos2;

    printf("Nos diga a duracao do evento em segundos: ");
    scanf("%d", &segundos);
    //Se os segundos forem menor do que 0 a pergunta sera perguntada novamente
    do
    {
        if (segundos < 0)
        {
         printf("Valor Invalido! Insira novamente\n");
        printf("Digite a duracao do evento em segundos: ");
        scanf("%d", &segundos);    
        }
    } while (segundos < 0);

    //Operações
    
    horas = segundos / 3600;
    minutos = segundos % 3600 / 60;
    segundos2 = segundos % 3600 % 60 % 60;

    //Por ultimo mostramos o resultado

    printf("A duracao foi de:\n");

    if (horas > 0)
    {
        printf("%d horas\n", horas);
    }
    if (minutos > 0)
    {
        printf("%d minutos\n", minutos);
    }
    if (segundos2 > 0)
    {
        printf("%d segundos", segundos2);
    }
    return 0;
    
    //Ola professor, eu fiz as atividades com algumas coisas a mais, mas desrespeitando os seus critérios
    //Que seria os números reais, eu não quis usar porque pra mim não fazia sentido por exemplo calcular a area com numeros negativos
    //Eu sei que minha opinião não importa muito mas so quis esclarecer aqui, 
}

    