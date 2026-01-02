#include <stdio.h>

int main(void)
{
    long long numero;

    printf("Número: ");
    scanf("%lld", &numero);

    long long temporario = numero;
    int soma = 0;
    int posicao = 0;

    while (temporario > 0)
    {
        int digito = temporario % 10;

        if (posicao % 2 == 1)
        {
            int produto = digito * 2;
            soma += produto / 10;
            soma += produto % 10;
        }
        else
        {
            soma += digito;
        }

        temporario /= 10;
        posicao++;
    }

    if (soma % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    temporario = numero;
    int tamanho = 0;
    long long primeiros_dois = numero;

    while (primeiros_dois >= 100)
    {
        primeiros_dois /= 10;
    }

    while (temporario > 0)
    {
        temporario /= 10;
        tamanho++;
    }

    if (tamanho == 15 && (primeiros_dois == 34 || primeiros_dois == 37))
    {
        printf("AMEX\n");
    }
    else if (tamanho == 16 && (primeiros_dois >= 51 && primeiros_dois <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((tamanho == 13 || tamanho == 16) && (primeiros_dois / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
