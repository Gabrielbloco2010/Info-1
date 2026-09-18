#include <stdio.h>
int main()
{
    // Criamos as variaveis
    double area, perimetro, base, altura;
    // Perguntamos quais são os valores da base e da altura
    // Se o valor for menor de 0 a pergunta se repetira
    printf("Vamos calcular a area e o perimetro de um retangulo\n");
    printf("Diga o valor da base: ");
    scanf("%lf", &base);
    do
    {
        if (base <= 0)
        {
        printf("Valor Invalido! Insira novamente\n");
        printf("digite o valor da base: ");
        scanf("%lf", &base);    
        }
    } while (base <= 0);
    printf("Diga o valor da altura: ");
    scanf("%lf", &altura);
    do
    {
        if (altura <= 0)
        {
        printf("Valor Invalido! Insira novamente\n");
        printf("digite o valor da altura: ");
        scanf("%lf", &altura);    
        }
    } while (altura <= 0);

    // Operações

    perimetro = 2 * (base + altura);
    area = base * altura;

    // Resultado

    printf("Sua area = %.2lf\n", area);
    printf("Seu perimetro = %.2lf", perimetro);
    return 0;
}