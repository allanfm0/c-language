#include <stdio.h>

int main(){
    printf("<<< EX03 - Dados >>> \n");

    char nome[10];
    printf("Qual e o seu nome: ");
    gets(nome);
    int idade;
    printf("Quantos anos voce tem: ");
    scanf("%i", &idade);
    float peso;
    printf("Qual e o seu peso? (KG) ");
    scanf("%f", &peso);
    printf("\n ----------<<< PROCESSANDO >>>----------");
    printf("\nMuito prazer, %s. Voce tem %i anos e pesa %.2fKG, correto?", nome, idade,peso);
    printf("\nFIM...");

    return 0;
}