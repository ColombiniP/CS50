#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("Quantos pontos você perdeu? ");
    const int MEU = 2;

    if (points < MEU)
    {
        printf("Perdeu menos pontos que eu.\n");
    }
    else if (points > MEU)
    {
        printf("Perdeu mais pontos que eu.\n");
    }
    else
    {
        printf("Perdemos a mesma quantidade de pontos.\n");
    }
}
