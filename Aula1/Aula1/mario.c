#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("tamanho: ");
    }
    while(n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
        for (int j = 1; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
