#include <stdio.h>

int main()
{
    printf("<<< EX13 - Par ou Impar >>>");
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("O numero que voce digitou e %s.\n", (num%2==0)? "PAR": "IMPAR");

    return 0;
}