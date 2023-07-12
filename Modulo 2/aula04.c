#include <stdio.h>

int main()
{
    int a, b, maior;
    printf("Digite um numero:");
    scanf("%i", &a);
    printf("Digite outro numero: ");
    scanf("%i", &b);

    maior = (a > b) ? a : b;
    printf("Entre o numero %i e o numero %i, o maior eh %i.", a, b, maior);

    /*
        float media;
        printf("Digite a sua media: ");
        scanf("%f", &media);

        printf("Sua situacao e: %s",(media >= 7) ? "Aprovado!" : "Reprovado!");
    */

    return 0;
}