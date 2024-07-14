#include <cs50.h>
#include <stdio.h>

float desconto(float preco, int percentual);

int main(void)
{
    float valor = get_float("Valor total: ");
    int percentual = get_int("Percentual: ");
    printf("%.2f\n",desconto(valor, percentual));
}


float desconto(float preco, int percentual)
{
    return preco * (100 - percentual) / 100;
}
