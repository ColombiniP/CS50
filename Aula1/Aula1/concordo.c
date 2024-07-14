#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char answer = get_char("Você concorda? ");
        /*
        switch (answer)
        case ("y" || "Y"): printf("Sim\n");
        case ("n" || "N"): printf("Não\n");
        break;
        */
       if (answer == 'y' || answer == 'Y')
       {
            printf("Sim\n");
       }
       else if (answer == 'n' || answer == 'N')
       {
            printf("Não\n");
       }

}
