#include <stdio.h>
#include <time.h>
int main()
{
    printf("<<< EX04 - Servico militar 1.0v >>> \n");
    time_t t;
    struct tm *data;
    data = localtime(&t);

    int ano = data-> tm_year + 1900;

    printf("Atualmente estamos no ano de %i.", ano);

    int nasc;
    printf("Em qual ano voce nasceu? ");
    fflush(stdin);
    scanf("%i",  &nasc);
    int idade = ano - nasc;

    printf("Sua idade atual e: %i anos.", idade);
    if(idade < 18)
    {
        printf("\nVoce ainda nao tem 18 anos.");
    }
    else
    {
        printf("\nJa fez 18 anos. Pode se alista no exercito!");
    }
    
    return 0;
}