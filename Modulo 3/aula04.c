#include <stdio.h>

int main()
{
    int n1 = 3;
    int n2 = 4;

    if (n1 > n2)
    {
        printf("O maior e %i", n1);
    }
    else if (n1 < n2)
    {
        printf("O maior e %i", n2);
    }
    else if (n1 == n2)
    {
        printf("Eles nao iguais!!");
    }
    else
    {
        printf("ERRRO!");
    }
    return 0;
}