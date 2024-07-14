#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float quantia = get_float("valor: ");
    int centavos = round(quantia * 100);
    printf("Centavos: %i\n", centavos);
}
