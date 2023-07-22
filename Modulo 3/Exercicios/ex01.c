#include <stdio.h>

int main()
{

    printf("<<< EX01 - Bons alunos merecem parabens! >>> \n");
    float nota1, nota2;
    printf("Digite sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;
    if (media >= 7)
    {
        printf("Sua media final foi: %.1f", media);
        printf("\nMEUS PARABENS!!");
    }
    printf("Sua media final foi: %.1f", media);

    return 0;
}