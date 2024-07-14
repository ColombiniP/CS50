#include <cs50.h>
#include <stdio.h>


void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow!\n");
    }
}


int main(void)
{
    /*
    int contador = 0;
    while (contador < 3)
    {
        printf("meow!\n");
        contador++;
    }
    */
    meow(3);

}
