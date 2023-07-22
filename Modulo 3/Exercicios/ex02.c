#include <stdio.h>

int main()
{
    printf("<<< EX02 - Consumidor ganha desconto >>> \n");
    
    float preco;
    printf("Digite qual foi o valor do produto: R$ ");
    fflush(stdin);
    scanf("%f", &preco);
    printf("----------------\n");
    printf("Voce comprou R$%.2f na nossa loja.\n",preco );
    if(preco >= 500)
    {
        float desc = (preco * 10 / 100);
        float precoFinal = preco - desc;
        printf("===============ATENCAO==============\n");
        printf("Por fazer mais de R$500.00 de compras, voce vai receber um desconto de R$%.2f !\n ", desc);
        printf("VAlor total: R$ %.2f.", precoFinal);

    }
    printf("VOLTE SEMPRE!\n");
    printf("----------------\n");


    return 0;
}