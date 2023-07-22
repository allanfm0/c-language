#include <stdio.h>
#include <time.h>

int main()
{
    printf("<<< EX03 - Fila do Banco >>> \n");

    time_t t;
    struct tm *data;
    time(&t);
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    int nasc;
    printf("Em que ano voce nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);
    int idade = ano - nasc;
    printf("Voce tem %d anos, certo? \nSeja bem vindo ao Banco!.", idade);
    if (idade >= 65)
    {
        printf("==== | ATENCAO! DIRAJA-SE A FILA PREFERENCIAL! | ====");
    }

    return 0;
}