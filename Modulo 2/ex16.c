#include <stdio.h>

int main(){
    printf("<<< EX16 - Operadores de deslocamento >>> \n");

    int n, d;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i", &d);

    printf("-----OPERCAO SHIFT-----\n");
    printf("Calculando %i >> %i e igual a %i.\n", n,d, (n>>d));
    printf("Calculando %i << %i e igual a %i.\n", n,d, (n<<d));

    
    return 0;
}