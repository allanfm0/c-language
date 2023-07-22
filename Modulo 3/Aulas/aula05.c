#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%i", &n);
    switch(n){
        case 1:
            printf("UM");
            break;

        case 2:
            printf("DOIS");
            break;
        default:
            printf("ERRO!");
            break;
    }


    return 0;
}