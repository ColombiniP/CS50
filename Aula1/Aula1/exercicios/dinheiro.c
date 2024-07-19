#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float devido; // recebe o valor a ser trocado 
    
    float moedas; // recebe o valor a ser trocado convertido em moedas de 0.01
    
    int totalMoedas; // recebe o total de moedas necessárias a ser devolvida

    do 
    {   
        devido = get_float("Qual o troco? "); // peço o valor a ser trocado
    } while(devido <= 0); // verifica se o valor é monetário e maior que o

    moedas = roundf(devido * 100); // convertendo nota para moedas
    int trocoMoedas = moedas; // convertendo para inteiro
    do
    {
        if (moedas >= 0) {
            trocoMoedas -= (0.25 * 100);
            printf("%.i\n",trocoMoedas);
        }
    }
    while (trocoMoedas >= 0);    


}