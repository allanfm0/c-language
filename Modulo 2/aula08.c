#include <stdio.h>

int main(){

    int n = 8;
    printf("incrementando +1 na variavel: %i", ++n);

    int x = 9;
    int y = 3 + x++;
    printf("\nOs valore de %i e %i", x, y);
    return 0;
}