#include <stdio.h>

void main()
{
    unsigned int idade = 19;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Allan";

    printf("%s e do sexo %c, tem %i anos e pesa %.1fKG.", nome, sexo, idade, peso);
}