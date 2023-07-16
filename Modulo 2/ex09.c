#include <stdio.h>

int main()
{
    printf("<<< EX09 - Terca parte >>> \n");
    int num, dobro;
    float terca;
    printf("Digite um numero: ");
    scanf("%i", &num);

    dobro = num * 2;
    terca = (float)num / 3;

    printf("Analisando o numero %i, o dobro dele e %i e a terca parte e %.2f.", num, dobro, terca);

    return 0;
}