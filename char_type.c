#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCII IS %d\n", c);
    printf("c the character %c\n", c);
    printf("Three consecutive chars are : %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings char : %c%c%c \n", '\a', '\a', '\a');

    return 0;
}