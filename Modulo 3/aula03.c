#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("O numero %i e PAR!", num);
    }
    else
    {
        printf("O numero %i e IMPAR!", num);
    }
    printf("\nFIM!");
    return 0;
}