#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numb;

    do
    {
        numb = get_int("Tamanho: ");
    }
    while(numb < 1 || numb > 8);

    for (int i = 0; i < numb; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("#\n");
    }
}
