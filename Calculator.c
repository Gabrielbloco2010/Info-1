#include <stdio.h>
int main(){
double Operacao, quanoperacao, valor, resultado = 0, Vezes = 1, divisao, diminuir;
int quanti, YorN;


printf("=====CALCULADORA=====\n");
printf("===== MAIS (1) =====\n");
printf("===== MENOS (2) =====\n");
printf("===== VEZES (3) =====\n");
printf("===== DIVISAO (4) =====\n");
printf("=======================\n");
scanf("%lf", &Operacao);

if (Operacao == 1)
{
    printf("===== ADICAO =====\n");
    printf("QUANTAS ADICOES FARA: ");
    scanf("%lf", &quanoperacao);
   for (int quanti = 1; quanti <= quanoperacao; quanti++)
   {
    printf("Digite o valor %i: ", quanti);
    scanf("%lf", &valor);
    resultado = resultado + valor;
   }
   
    printf("RESULTADO = %.2lf\n", resultado);
    printf("GOSTARIA DE CONTINUAR\n");
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);

    if (YorN == 1)
    {
        do
        {
            printf("=====CONTINUACAO=====\n");
printf("===== MAIS (1) =====\n");
printf("===== MENOS (2) =====\n");
printf("===== VEZES (3) =====\n");
printf("===== DIVISAO (4) =====\n");
printf("=======================\n");
scanf("%lf", &Operacao);

if (Operacao == 1)
{
    printf("===== ADICAO =====\n");
    printf("QUANTAS ADICOES FARA: ");
    scanf("%lf", &quanoperacao);
   for (int quanti = 1; quanti <= quanoperacao; quanti++)
   {
    printf("Digite o valor %i: ", quanti);
    scanf("%lf", &valor);
    resultado = resultado + valor;
   }
   
    printf("RESULTADO = %.2lf\n", resultado);
    printf("GOSTARIA DE CONTINUAR\n");
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 2)
{
    printf("===== MENOS =====\n");
    printf("Quantas Subtracoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        resultado = resultado - valor;
    }
    printf("RESULTADO = %.2lf\n", resultado);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
} 
else if (Operacao == 3)
{
    printf("===== MULTIPLICACAO =====\n");
    printf("Quantas multiplicacoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);

        resultado = resultado * valor;
    }
    printf ("RESULTADO = %.2lf\n", resultado);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 4)
{
    printf("===== DIVISAO =====\n");
    printf("Quantas divisoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        
        resultado = resultado / valor;
        
    }
    printf("RESULTADO = %.2lf\n", resultado);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}

        } while (YorN == 1);
    } 
    



}
else if (Operacao == 2)
{
    printf("===== MENOS =====\n");
    printf("Quantas Subtracoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        if (quanti == 1)
        {
           diminuir = valor; 
        } else {
        diminuir = diminuir - valor;
        }
    }
    printf("RESULTADO = %.2lf\n", diminuir); 
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
    if (YorN == 1)
    {
        do
        {
            printf("=====CONTINUACAO=====\n");
printf("===== MAIS (1) =====\n");
printf("===== MENOS (2) =====\n");
printf("===== VEZES (3) =====\n");
printf("===== DIVISAO (4) =====\n");
printf("=======================\n");
scanf("%lf", &Operacao);

if (Operacao == 1)
{
    printf("===== ADICAO =====\n");
    printf("QUANTAS ADICOES FARA: ");
    scanf("%lf", &quanoperacao);
   for (int quanti = 1; quanti <= quanoperacao; quanti++)
   {
    printf("Digite o valor %i: ", quanti);
    scanf("%lf", &valor);
    diminuir = diminuir + valor;
   }
   
    printf("RESULTADO = %.2lf\n", diminuir);
    printf("GOSTARIA DE CONTINUAR\n");
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 2)
{
    printf("===== MENOS =====\n");
    printf("Quantas Subtracoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        
        diminuir = diminuir - valor;
        
    }
    printf("RESULTADO = %.2lf\n", diminuir); 
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}

else if (Operacao == 3)
{
    printf("===== MULTIPLICACAO =====\n");
    printf("Quantas multiplicacoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);

        diminuir = diminuir * valor;
    }
    printf ("RESULTADO = %.2lf\n", diminuir);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 4)
{
    printf("===== DIVISAO =====\n");
    printf("Quantas divisoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        
        diminuir = diminuir / valor;
    }
    printf("RESULTADO = %.2lf\n", diminuir);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
        } while (YorN == 1);
        
    }
    

}
else if (Operacao == 3)
{
    printf("===== MULTIPLICACAO =====\n");
    printf("Quantas multiplicacoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);

        Vezes = Vezes * valor;
    }
    printf ("RESULTADO = %.2lf\n", Vezes);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);

    if (YorN == 1)
    {
        do
        {
            printf("=====CONTINUACAO=====\n");
printf("===== MAIS (1) =====\n");
printf("===== MENOS (2) =====\n");
printf("===== VEZES (3) =====\n");
printf("===== DIVISAO (4) =====\n");
printf("=======================\n");
scanf("%lf", &Operacao);

if (Operacao == 1)
{
    printf("===== ADICAO =====\n");
    printf("QUANTAS ADICOES FARA: ");
    scanf("%lf", &quanoperacao);
   for (int quanti = 1; quanti <= quanoperacao; quanti++)
   {
    printf("Digite o valor %i: ", quanti);
    scanf("%lf", &valor);
    Vezes = Vezes + valor;
   }
   
    printf("RESULTADO = %.2lf\n", Vezes);
    printf("GOSTARIA DE CONTINUAR\n");
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 2)
{
    printf("===== MENOS =====\n");
    printf("Quantas Subtracoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        Vezes = Vezes - valor;
    }
    printf("RESULTADO = %.2lf\n", Vezes);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
} 
else if (Operacao == 3)
{
    printf("===== MULTIPLICACAO =====\n");
    printf("Quantas multiplicacoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);

        Vezes = Vezes * valor;
    }
    printf ("RESULTADO = %.2lf\n", Vezes);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 4)
{
    printf("===== DIVISAO =====\n");
    printf("Quantas divisoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        
        Vezes = Vezes / valor;
        
    }
    printf("RESULTADO = %.2lf\n", Vezes);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}

        } while (YorN == 1);
    } 
    




}
else if (Operacao == 4)
{
    printf("===== DIVISAO =====\n");
    printf("Quantas divisoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        if (quanti == 1)
        {
            divisao = valor;
        } else{
        divisao = divisao / valor;
        }
    }
    printf("RESULTADO = %.2lf\n", divisao);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);

    if (YorN == 1)
    {
        do
        {
            printf("=====CONTINUACAO=====\n");
printf("===== MAIS (1) =====\n");
printf("===== MENOS (2) =====\n");
printf("===== VEZES (3) =====\n");
printf("===== DIVISAO (4) =====\n");
printf("=======================\n");
scanf("%lf", &Operacao);

if (Operacao == 1)
{
    printf("===== ADICAO =====\n");
    printf("QUANTAS ADICOES FARA: ");
    scanf("%lf", &quanoperacao);
   for (int quanti = 1; quanti <= quanoperacao; quanti++)
   {
    printf("Digite o valor %i: ", quanti);
    scanf("%lf", &valor);
    divisao = divisao + valor;
   }
   
    printf("RESULTADO = %.2lf\n", divisao);
    printf("GOSTARIA DE CONTINUAR\n");
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 2)
{
    printf("===== MENOS =====\n");
    printf("Quantas Subtracoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);
        divisao = divisao - valor;
    }
    printf("RESULTADO = %.2lf\n", divisao);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
} 
else if (Operacao == 3)
{
    printf("===== MULTIPLICACAO =====\n");
    printf("Quantas multiplicacoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", quanti);
        scanf("%lf", &valor);

        divisao = divisao * valor;
    }
    printf ("RESULTADO = %.2lf\n", divisao);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}
else if (Operacao == 4)
{
    printf("===== DIVISAO =====\n");
    printf("Quantas divisoes fara: ");
    scanf("%lf", &quanoperacao);
    for (quanti = 1; quanti <= quanoperacao; quanti++)
    {
        printf("Digite o valor %i: ", divisao);
        scanf("%lf", &valor);
        
        divisao = divisao / valor;
        
    }
    printf("RESULTADO = %.2lf\n", divisao);
    printf("(1)SIM (2)NAO\n");
    scanf("%i", &YorN);
}

        } while (YorN == 1);
    } 
    



}
}