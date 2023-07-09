#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n = rand() % 10 + 1;
    printf("O numero gerado foi: (%i).", n);


    return 0;
}