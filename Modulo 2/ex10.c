#include <stdio.h>

int main()
{
    printf("<<< EX10 - Alfabeto >>> \n");

    char letra;
    printf("Digte uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. E depois da letra %c temos a letra %c.", letra, (letra - 1), letra, (letra + 1));

    return 0;
}