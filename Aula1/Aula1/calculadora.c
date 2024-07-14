#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /*
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
    */

    long int x = get_long("x: ");
    long int y = get_long("y: ");
    long int z = x + y;
    printf("%li\n", x + y);

}
