#include <stdio.h>
int main()
{
int n1, n2, n3;
printf("digite 3 valores:\n");
scanf("%i %i %i", &n1, &n2, &n3);
printf("sequencia crescente dos numeros:\n");
if (n1 < n2 && n1 < n3)
{if (n2 > n3)
{
    printf("%i %i %i", n1, n2, n3);
}else{
printf("%i %i %i", n1, n3, n2);
}

    
}
else if (n2 < n1 && n2 < n3)
{
    if (n1 < n3)
    {
        printf("%i %i %i", n2, n1, n3);
    }else{
    printf("%i %i %i", n2, n3, n1);
    }
    
}
else if (n3 < n1 && n3 < n2)
{
    if (n1 < n2)
    {
        printf("%i %i %i", n3, n1, n2);
    }else{
    printf("%i %i %i", n3, n2, n1);
    }
    
}
}