#include <stdio.h>
int main()
{
    int es;
printf("Escolha uma das escolhas abaixo=\n");
printf("Pizza (1)\n");
printf("Hamburguer (2)\n");
printf("Hot-Dog (3)\n");
printf("Pancho (4)\n");
do
{

    scanf("%i", &es);
    printf("Valor Invalido!\n");
    printf("Insira novamente\n");
} while (es > 4 || es <= 0);

if (es == 1)
{
    printf("Pizza de calabresa G = R$49,99\n");
    printf("Pizza de calabresa M = R$39,99\n");
    printf("Pizza de coracao G = R$46,99\n");
    printf("Pizza de coracao M = R$36,99\n");
}
else if (es == 2)
{
    printf("Hamburguer extra Cheddar = R$29,99\n");
    printf("Hamburguer big = R$39,99\n");
    printf("Hamburguer Bacon = R$41,99\n");
    printf("Hamburguer Calabresa = R$26,99\n");
}
else if (es == 3)
{
    printf("Hot-Dog Mexilhoes = R$29,99\n");
    printf("Hot-Dog Bacon = R$19,99\n");
    printf("Hot-Dog Salsicha = R$11,99\n");
    printf("Hot-Dog Calabresa = R$16,99\n");
}
else if (es == 4)
{
    printf("Pancho de coracao = R$29,99\n");
    printf("Pancho de Bacon = R$39,99\n");
    printf("Pancho de Bacalhau = R$41,99\n");
    printf("Pancho de Boi = R$26,99\n");
}

}