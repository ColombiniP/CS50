#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numero = get_int("Digite um número. ");
    if (numero % 2 == 0)
    {
        printf("Par!\n");
    }
    else
    {
        printf("Impar!\n");
    }
}
