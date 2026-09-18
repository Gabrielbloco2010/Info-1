#include <stdio.h>
int main()
{
    // Vamos fazer um código que receba dois valores e calcule usando uma média Ponderada
    // Para começar precisamos fazer as variáveis
    double nota1, nota2, M;

    // Agora precisamos fazer a pergunta para o usuário
    // Eu fiz que o programa perguntasse novamente se a nota fosse menor do que 0 ou maior do que 10
    printf("digite sua primeira nota: ");
    scanf("%lf", &nota1);
    do
    {
        
        if (nota1 < 0 || nota1 > 10) 
        {
            printf("Valor Invalido! Insira novamente\n");
        printf("digite sua primeira nota: ");
        scanf("%lf", &nota1);  
        }
          
        
        
    } while (nota1 < 0 || nota1 > 10);

    printf("digite sua segunda nota: ");
    scanf("%lf", &nota2);
    do
    {
        if (nota2 < 0 || nota2 > 10)
        {
            printf("Valor Invalido! Insira novamente\n");
        printf("digite sua segunda nota: ");
        scanf("%lf", &nota2);
        }
        
    } while (nota2 < 0 || nota2 > 10);

    // Agora vem as operações (OBS: nota1 tem peso de 4 e nota2 tem peso de 6)

    M = (nota1 * 4 + nota2 * 6) / 10;

    // Por fim precisamos mostrar para o usuário o resultado

    printf("Sua media = %.2lf", M);
    return 0;
}