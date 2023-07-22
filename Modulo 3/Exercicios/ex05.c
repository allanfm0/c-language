#include <stdio.h>

int main() 
{
    printf("<<< EX05 - Ano Bissexto >>> \n");
    int ano;
    printf("Digit qualquer ano: ");
    fflush(stdin);
    scanf("%i", &ano);

    if (ano%4==0 && ano%100!=0 || ano%400==0)
    {
        printf("\nO ano de %i e bissexto!", ano);
    }
    else
    {
        printf("\nO ano de %i nao e bissexto!", ano);
    }
    
    return 0;
}