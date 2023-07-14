#include <stdio.h>

// precedencia:
    // | !
    // | &&
    // | ||


int main()
{
    int a = 2, b =4, c = 6;
    printf("%s", a>b && a<c? "Verdadeiro":"Falso");
    

    return 0;
}