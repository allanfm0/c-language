#include <stdio.h>

int main()
{
    int c = 65;
    char l = (char) c;
    printf("TYPECAST de int para char: %c \n",l);

    int x = 5;
    int y = 2;
    float m = (float) x / y;
    printf("O resultado: %.2f.", m);

    return 0;
}