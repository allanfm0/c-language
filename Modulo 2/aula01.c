#include <stdio.h>

int main()
{
    float preco = 1998.90;
    float desc = preco - (preco * 10 / 100);
    printf("O produto custa %.2f e com o desconto de 10%% fica -> %.2ff", preco, desc);

    /*
        float n1 = 5.5;
        float n2 = 7.8;
        float m = (n1 + n2) / 2;
        printf("A media eh -> %.2f.", m);
    */

    /*
        char letra = 'J';
        letra = letra + 1;
        printf("A letra eh -> %c", letra);
    */

    /*
        int n1 = 8;
        int n2 = 9;
        int r = n1 + n2; // - * / %
        printf("O resultado eh -> %i.", r);
    */

    return 0;
}