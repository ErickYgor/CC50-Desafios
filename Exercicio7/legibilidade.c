#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char texto[1000];

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);

    int letras = 0;
    int palavras = 1;
    int frases = 0;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isalpha(texto[i]))
        {
            letras++;
        }
        else if (texto[i] == ' ')
        {
            palavras++;
        }
        else if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            frases++;
        }
    }

    float L = ((float) letras / palavras) * 100;
    float S = ((float) frases / palavras) * 100;

    int indice = round(0.0588 * L - 0.296 * S - 15.8);

    if (indice < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (indice >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", indice);
    }

    return 0;
}
