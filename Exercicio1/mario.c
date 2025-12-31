int main(void)
{

    int numero;
    do
    {
        printf("Qual a altura da piramide: ");
        scanf("%d", &numero);
    }
    while (numero < 1 || numero > 8);

    for (int i = 0; i < numero; i++)    
    {
        for (int j = 0; j < numero - 1 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
