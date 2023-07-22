#include <stdio.h>

int main()
{
    float vel;
    printf("Digite a sua velocidade atual: ");
    fflush(stdin);
    scanf("%f", &vel);

    if(vel> 80)
    {
        printf("Voce foi multado!!");
    }
    printf("\nSe beber nao dirija!");

    return 0;
}