#include <stdio.h>
#include <math.h>

int main(void){

    double valorDevido;
    int contadorMoedas = 0;

    do
    {
        printf("Qual e o valor devido: ");
        scanf("%lf", &valorDevido);
    }
    while (valorDevido < 0);
   
    int centavos = round(valorDevido * 100);

    while (centavos >= 25) {
        centavos -= 25;
        contadorMoedas++;
    }

    while (centavos >= 10) {
        centavos -= 10;
        contadorMoedas++;
    }

    while (centavos >= 5) {
        centavos -= 5;
        contadorMoedas++;
    }

    while (centavos >= 1) {
        centavos -= 1;
        contadorMoedas++;
    }

    printf("%d\n", contadorMoedas);
}