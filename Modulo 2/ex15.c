#include <stdio.h>

int main(){

    printf("<<< EX15 - Operadores bitwise >>> \n");
    int n1, n2;
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("\n--------OPERCAO BITWISE--------");
    printf("\nCalculando %i & %i e igual a %i.", n1, n2, (n1 & n2));
    printf("\nCalculando %i | %i e igual a %i.", n1, n2, (n1 | n2));
    printf("\nCalculando %i ^ %i e igual a %i.", n1, n2, (n1 ^ n2));
    return 0;
}