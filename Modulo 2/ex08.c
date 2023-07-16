#include <stdio.h>

int main()
{
    printf("<<< EX08 - antecessor e sucessor >>> \n");
    int num, ant, suc;
    printf("Digite um numero: ");
    scanf("%i", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Analisando o numero %i, o antecessor e %i e o sucessor e %i.", num, ant, suc);
    return 0;
}