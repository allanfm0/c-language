#include <stdio.h>
int main()
{
    printf("<<< EX14 - Situacao do aluno >>> \n");
    float nota1 , nota2, media;
    printf("NOTA 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("NOTA 2: ");
    fflush(stdin);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("Com as notas %.2f e %.2f o aluno tem a media: %.2f. \n", nota1, nota2, media);
    printf("Situacao: %s.",(media >= 7)?"APROVADO": "REPROVADO");
    return 0;
}