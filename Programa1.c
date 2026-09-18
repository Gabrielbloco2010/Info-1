#include <stdio.h>

int main()
 {
// Passo 1: Entrada de dados
double n1, n2, n3;
printf("Sua primeira nota: ");
scanf("%lf",&n1);
printf("Sua segunda nota: ");
scanf("%lf", &n2);
printf("Sua terceira nota: ");
scanf("%lf", &n3);

// Passo 2: Processamento de dados
double m = (n1 + n2 + n3) / 3;

// Passo 3: Saida de dados
printf("Sua media: %lf\n", m);
}
