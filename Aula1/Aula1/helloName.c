#include <cs50.h> // biblioteca padrão da cs50 para trabalhar com string e inclue funções deles como a get_string
#include <stdio.h> // biblioteca standart input/output

int main(void)
{
    string pergunta = get_string("Qual seu nome? ");
    printf("Olá, %s\n", pergunta);
}
