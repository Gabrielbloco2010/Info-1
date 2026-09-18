#include <stdio.h>
int main(){
double n1, n2, n3, nf;
printf("digite sua primeira nota: \n");
scanf("%lf", &n1);
if (n1 > 10 || n1 < 0)
{
    printf("!$#ERROR#!@");
    return 0;
}

printf("digite sua segunda nota: \n");
scanf("%lf", &n2);
if (n2 > 10 || n2 < 0)
{
    printf("!$#ERROR#!@");
    return 0;
}

printf("digite sua terceira nota: \n");
scanf("%lf", &n3);
if (n3 > 10 || n3 < 0)
{
    printf("!$#ERROR#!@;");
    return 0;
}


nf = (n1 + n2 + n3) / 3;
printf("SUA MEDIA FOI = %.2lf\n", nf);




if (nf >= 6)
{
    printf("!APROVADO!");
} else{
printf("!REPROVADO!");
}

}
