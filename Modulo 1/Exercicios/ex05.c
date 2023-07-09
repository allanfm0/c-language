#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("<<< EX05 - Numero aleatorio >>> \n");
    int numRand = rand() % 5 + 1;
    int num;
    printf("Vou pensar em um numero de 0 a 5. Tente adivinha!");
    printf("\nQual e o seu palpite? ");
    scanf("%i", &num);
    printf("Eu pensei no numero %i e voce pensou no %i.", numRand, num);


    return 0;
}