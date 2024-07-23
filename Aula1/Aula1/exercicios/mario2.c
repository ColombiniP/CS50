#include<cs50.h>
#include<stdio.h>

int tamanho = 0;
int valida(void)
{
    do
    {
        tamanho = get_int("Tamanho: ");
    } while (tamanho <= 0 || tamanho > 8);
    return 0;
}

int ladoA(void)
{
    for (int i = 0; i < tamanho; i++) {

        for (int k = 0; k < tamanho - i; k++) {
            printf(" ");
        }

        for(int j = 0; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}

int ladoB(void)
{
    for (int i = 0; i < tamanho; i++) {

        for (int k = 0; k < tamanho - 1; k++) {
            printf(" ");
        }

        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}

int main(void)
{
    valida();
    ladoA();
    ladoB();
}