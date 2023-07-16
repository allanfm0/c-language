#include <stdio.h>

int main()
{
    printf("<<< EX12 - Preco do produto >>> \n");

    char produto[20];
    float preco, desc, novoPreco;
    printf("Produto: ");
    fflush(stdin);
    gets(produto);

    printf("Preco do produto %s: R$ ", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desc);

    novoPreco = preco - (preco * desc / 100);
    printf("O produto custava %s custava R$%.2f.\n", produto, preco);
    printf("Porem, com %.2f%% de desconto, passa a custar R$%.2f.\n.", desc, novoPreco);
    

    return 0;
}