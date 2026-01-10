#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char palavra[]);

int main(void)
{
    char palavraUm[50];
    char palavraDois[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavraUm);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavraDois);

    int score1 = compute_score(palavraUm);
    int score2 = compute_score(palavraDois);

    if (score1 > score2)
    {
        printf("Jogador 1 venceu!\n");
    }
    else if (score2 > score1)
    {
        printf("Jogador 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}

int compute_score(char palavra[])
{
    int score = 0;

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (isalpha(palavra[i]))
        {
            char letra = toupper(palavra[i]);
            int indice = letra - 'A';
            score += POINTS[indice];
        }
    }

    return score;
}
