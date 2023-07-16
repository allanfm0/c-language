#include <stdio.h>
#include <string.h>
int main()
{
    printf("<<< EX11 - Media aluno >>> \n");

    char nome[20];
    float nota1, nota2,media;
    printf("Nome do aluno: ");
    gets(nome);
    printf("NOTA 1: ");
    fflush(stdin);
    scanf("%f",&nota1);
    printf("NOTA 2: ");
    fflush(stdin);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("O aluno %s, tirou as notas: %.1f e %.1f.", nome, nota1, nota2);
    printf("\nA media final foi: %.1f.", media);

    return 0;
}