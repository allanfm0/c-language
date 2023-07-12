#include <stdio.h>
#include <string.h>

int main()
{
    char sit[10];
    float media = 4.5;
    strcpy(sit, (media>=7)?"Aprovado":"Reprovado");
    printf("A situacao do aluno eh: %s", sit);
    /*
        char nome[] = "Allan";
        printf("%s", strupr(nome));
    */
    return 0;
}