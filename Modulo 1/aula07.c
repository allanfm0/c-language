#include <stdio.h>

int main()
{
    // Strings:
    char nome[30];
    printf("Digit o seu nome: ");
    gets(nome);
    printf("Seu nome eh: %s.", nome);

    // Numeros:
        int n;
        float m;

        printf("Digite um numero inteiro: ");
        scanf("%i", &n);
        printf("Digite um numero real: ");
        scanf("%f", &m);
        printf("Voce digitou os valores %i e %.1f.", n, m);
    

    // Caracteres:
        char s;
        char r;
        printf("Digite um caracter: ");
        s = getchar();
        //scanf(" %c", &s);
        fflush(stdin);
        printf("Digite outro caracter: ");
        r = getchar();
        fflush(stdin);

        printf("Voce digitou %c e %c.", s, r);

    

    return 0;
}